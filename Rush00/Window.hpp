//
// Created by Andrii Lohashchuk on 11/4/17.
//

#ifndef RUSH00_WINDOW_HPP
#define RUSH00_WINDOW_HPP

/*
** Colorize an output of printf
*/

# define RESET      "\033[0m"
# define RED        "\033[1;31m"
# define YELLOW     "\033[1;33m"
# define WHITE      "\033[1;37m"
# define GREEN      "\033[1;32m"
# define BLUE       "\x1b[34m"
# define MAGENTA    "\x1b[35m"
# define CYAN       "\x1b[36m"
# define BLACK      "\x1b[37m"


#include <ncurses.h>
#include <iostream>
#include <cstdlib>
#include <unistd.h>


class Window {
    WINDOW* win;
    WINDOW* m_win;
    int in_char;
    int X_win;
    int Y_win;

    std::string name;

public:
    Window();
    Window(Window const &src);
    ~Window();

    Window &operator=(Window const &rhs);

    int getX_win() const;

    int getY_win() const;

    void            setName(std::string n);
    int init();
    void run();
    void close();
};


#endif //RUSH00_WINDOW_HPP
