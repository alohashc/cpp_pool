#include "Window.hpp"

int main() {

    Window 		win;

    std::string name;

    std::cout << "Entre your login: ";
    std::cin >> name;
    win.setName(name);
    int initialize = win.init();

    if (initialize == 0)
        win.run();
    win.close();
    return 0;
}