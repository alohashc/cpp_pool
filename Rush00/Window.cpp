//
// Created by Andrii Lohashchuk on 11/4/17.
//

#include "Window.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include "Bullet.hpp"
#include "Stars.hpp"

Window::Window() {
}

Window::Window(Window const &src) {

    *this = src;
}

Window::~Window() {
}

Window& Window::operator=(Window const &rhs) {

    if (this != &rhs)
    {
        this->in_char = rhs.in_char;
        this->X_win = rhs.X_win;
        this->Y_win = rhs.Y_win;
    }
    return *this;
}

void    Window::setName(std::string n) {

    this->name = n;
}

int Window::init() {
    win = initscr();
    getmaxyx(win, this->Y_win, this->X_win);

    win = newwin(this->getY_win() - 10, this->getX_win(), 0, 0);
    m_win = newwin(this->getY_win(), this->getX_win(), 0, 0);
    cbreak();
    noecho();
    clear();
    refresh();

    keypad(win, true);
    nodelay(win, true);
    curs_set(0);
    if (!has_colors()){
        endwin();
        printw("ERROR: NO COLOR");
        exit(1);
    }
    start_color();
    attron(A_BOLD);
    box(win, 0, 0);
    attroff(A_BOLD);
    attron(A_BOLD);
    box(m_win, 0, 0);
    attroff(A_BOLD);
    init_pair(1, COLOR_WHITE, COLOR_BLACK);
    wbkgd(win, COLOR_PAIR(1));
    init_pair(1, COLOR_WHITE, COLOR_BLACK);
    wbkgd(m_win, COLOR_PAIR(1));

    return 0;
}

void Window::run() {

    Player      player(this->X_win, this->Y_win);
    Enemy       *enemies = new Enemy[((this->X_win * this->Y_win) / 2)];
    Bullet      *bullets = new Bullet[((this->X_win * this->Y_win) / 2)];
    Stars       *stars = new Stars[((this->X_win * this->Y_win) / 2)];

    bool        over = false;
    bool        retry = true;

    for (int i = 0; i < ((this->X_win * this->Y_win) / 2); i++) {
        enemies[i] = Enemy(this->X_win, this->Y_win);
        bullets[i] = Bullet(this->X_win, this->Y_win);
        stars[i] = Stars(this->X_win, this->Y_win);
    }
    while (!over) {
        wmove(m_win, this->getY_win() - 10, 0);
        whline(m_win, '-', this->getX_win());


        while (retry) {

            attron(COLOR_PAIR(5));
            mvprintw(this->getY_win() - 6, 2, "NAME:   %s", this->name.c_str());
            attroff(COLOR_PAIR(5));
            attron(COLOR_PAIR(6));
            mvprintw(this->getY_win() - 4, 2, "SCORE:  %d", player.getScore());
            attron(COLOR_PAIR(6));
            init_pair(2, COLOR_GREEN, COLOR_BLACK);
            init_pair(3, COLOR_RED, COLOR_BLACK);
            init_pair(4, COLOR_YELLOW, COLOR_BLACK);
            init_pair(5, COLOR_CYAN, COLOR_BLACK);
            init_pair(6, COLOR_WHITE, COLOR_BLACK);
            int n = player.colorHealth(player.getHp());
            attron(COLOR_PAIR(n));
            mvprintw(this->getY_win() - 8, 2,"HEALTH: %s", player.healt(player.getHp()).c_str());
            attroff(COLOR_PAIR(n));
            in_char = wgetch(win);
            if (in_char == 27)
                retry = false;

            mvaddstr(player.getY(), player.getX(), "   ");
            player.move(in_char);
            attron(COLOR_PAIR(5));
            attron(A_UNDERLINE);
            mvaddstr(player.getY(), player.getX(), player.getDisplay().c_str());
            attroff(A_UNDERLINE);
            attroff(COLOR_PAIR(5));
            
            for (int i = 0; i < this->Y_win; i++) {
                mvaddch(stars[i].getY(), stars[i].getX(), ' ');
                stars[i].move();
                mvaddch(stars[i].getY(), stars[i].getX(), stars[i].getDisplay());
            }

            for (int i = 0; i < 20; i++) {

                for (int j = 0; j < shots; j++) {
                    if (enemies[i].getX() == bullets[j].getX() && enemies[i].getY() == bullets[j].getY()) {
                        enemies[i].move();
                        attron(A_REVERSE);
                        attron(COLOR_PAIR(3));
                        mvaddch(enemies[i].getY(), enemies[i].getX(), enemies[i].getDisplay());
                        attroff(COLOR_PAIR(3));
                        attroff(A_REVERSE);
                        enemies[i].setX(-1);
                        enemies[i].setY(-1);
                        player += 10;
                    }
                }
                attron(COLOR_PAIR(4));
                mvaddch(enemies[i].getY(), enemies[i].getX(), ' ');
                enemies[i].move();
                mvaddch(enemies[i].getY(), enemies[i].getX(), enemies[i].getDisplay());
                attroff(COLOR_PAIR(4));

                if ((player.getX() == enemies[i].getX() && player.getY() == enemies[i].getY()) || (
                        player.getX() + 2 == enemies[i].getX() && player.getY() == enemies[i].getY()) ||
                        (player.getX() + 1 == enemies[i].getX() && player.getY() == enemies[i].getY())) {
                    player.Dam(10);
                    if (player.getHp() == 0)
                        retry = false;
                }
            }
            if (in_char == 32 && shots < ((this->X_win * this->Y_win) / 2))
            {
                bullets[shots].setX(player.getX() + 1);
                bullets[shots].setY(player.getY());
                shots++;
            }
            for (int i = 0; i < shots; i++) {
                mvaddch(bullets[i].getY(), bullets[i].getX(), ' ');
                bullets[i].move();
                mvaddch(bullets[i].getY(), bullets[i].getX(), bullets[i].getDisplay());
            }
            refresh();
            wrefresh(m_win);
            usleep(30000);
        }
        refresh();
        wrefresh(m_win);
        attron(COLOR_PAIR(3));
        mvprintw(this->Y_win / 2, (this->X_win / 2) - 4, "%s", "GAME OVER");
        attroff(COLOR_PAIR(3));
        mvprintw((this->Y_win / 2) + 2, (this->X_win / 2) - 10, "%s", "Q - quit : R - retry");
        mvprintw((this->Y_win / 2) + 5, (this->X_win / 2) - 5, "%s %3d", "SCORE: ", player.getScore());
        mvprintw((this->Y_win / 2) + 7, (this->X_win / 2) - 6, "%s %3d", "HEALTH: ", player.getHp());        
        int symbol = wgetch(win);
        if (symbol == 'q')
            over = true;
        else if (symbol == 'r')
        {
            retry = true;
            player.setScore(0);
            player.setHp(100);
            this->init();
        }
    }
    delete [] enemies;
    delete [] bullets;
}

void Window::close() {
    endwin();
}

int Window::getX_win() const {
    return X_win;
}

int Window::getY_win() const {
    return Y_win;
}
