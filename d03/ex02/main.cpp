#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {

    {
        FragTrap f1("Akira");

        std::cout << "#####################FRAGTRAP########################" << std::endl;
        f1.meleeAttack("Zombie");
        f1.rangedAttack("Zombie");
        f1.beRepaired(5);
        f1.takeDamaged(25);
        f1.vaulthunter_dot_exe("Zombie");
        std::cout << "Hit points [" << f1.getHitPoints() << "]" << std::endl;
    }
    {
        ScavTrap s1("Vick");

        std::cout << "#####################SCAVTRAP#########################" << std::endl;
        s1.rangedAttack("Warrior");
        s1.meleeAttack("Warrior");
        s1.beRepaired(10);
        s1.takeDamaged(30);
        s1.challengeNewcomer("Warrior");
        std::cout << "Hit points [" << s1.getHitPoints() << "]" << std::endl;
    }
    return 0;
}