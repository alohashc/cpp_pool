#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main() {

	std::cout << "#####################FRAGTRAP########################" << std::endl;
	FragTrap *f1 = new FragTrap("Akira");

	std::cout << "#####################SCAVTRAP#########################" << std::endl;
	ScavTrap *s1 = new ScavTrap("Vick");

	std::cout << "#####################NINJA#########################" << std::endl;
	NinjaTrap *n1 = new NinjaTrap("Sai");

	std::cout << "#####################CLAP#########################" << std::endl;
	ClapTrap *c1 = new ClapTrap();

	std::cout << "______________________________________________________" << std::endl;
	n1->takeDamaged(37);
	n1->beRepaired(10);

	std::cout << "---------------" << std::endl;

	n1->ninjaShoebox(*f1);
	std::cout << "---------------" << std::endl;
	n1->ninjaShoebox(*s1);
	std::cout << "---------------" << std::endl;
	n1->ninjaShoebox(*n1);
	std::cout << "---------------" << std::endl;
	n1->ninjaShoebox(*c1);
	std::cout << "---------------" << std::endl;

	std::cout << "----------[Frag]" << std::endl;
	delete f1;
	std::cout << "-----------[Scav]" << std::endl;
	delete s1;
	std::cout << "-----------[Ninja]" << std::endl;
	delete n1;
	std::cout << "-----------[Clap]" << std::endl;
	delete c1;
	std::cout << "______________________________________________________" << std::endl;
    return 0;
}