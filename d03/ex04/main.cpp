#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int main() {
	SuperTrap super1;

	super1.rangedAttack("Bilbo");
	super1.meleeAttack("Bilbo");

	ScavTrap s1;

	super1.ninjaShoebox(s1);
	super1.vaulthunter_dot_exe("Spy");
	std::cout << "______________________________________________________" << std::endl;
    return 0;
}