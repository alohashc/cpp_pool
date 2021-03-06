#include <iostream>
#include "FragTrap.hpp"

int main() {
    FragTrap f1;

    while (f1.getHitPoints() > 0)
    {
        std::cout << "#####################################################" << std::endl;
        f1.meleeAttack("Human");
        f1.rangedAttack("Human");
        f1.beRepaired(10);
        f1.takeDamaged(35);
        f1.vaulthunter_dot_exe("Human");
        std::cout << "Hit Points: [" << f1.getHitPoints() << "]" << std::endl;
    }
    return 0;
}
