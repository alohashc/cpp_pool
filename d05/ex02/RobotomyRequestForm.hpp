//
// Created by Andrii Lohashchuk on 9/6/17.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form{
private:

	static const int _sign;
	static const int _execute;

public:

	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	~RobotomyRequestForm();

	RobotomyRequestForm &operator=(RobotomyRequestForm const & rhs);

	void execute(Bureaucrat const & executor);
};


#endif
