//
// Created by Andrii Lohashchuk on 8/1/17.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{
private:
    void _randomAction1(std::string const & target);
    void _randomAction2(std::string const & target);
    void _randomAction3(std::string const & target);
    void _randomAction4(std::string const & target);
    void _randomAction5(std::string const & target);

public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const & src);
    ~FragTrap();

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);

    void vaulthunter_dot_exe(std::string const & target);
};

#endif
