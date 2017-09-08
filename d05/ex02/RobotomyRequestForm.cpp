//
// Created by Andrii Lohashchuk on 9/6/17.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("nothing", "Robotomy", RobotomyRequestForm::_sign, RobotomyRequestForm::_execute){

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, "Robotomy", RobotomyRequestForm::_sign, RobotomyRequestForm::_execute){

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) {
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

// OVERLOAD

RobotomyRequestForm& RobotomyRequestForm::operator=(
		RobotomyRequestForm const &rhs) {
	return *this;
}

// Methods

void RobotomyRequestForm::execute(Bureaucrat const &executor) {
	Form::execute(executor);

	if (rand() % 2 == 1)
	{
		std::cout << "<" << this->getTarget() << ">" << " BzzzzzzzzzzzzzZZZZZZZ" << std::endl;
		std::cout << "<" << this->getTarget() << ">" << " has been robotomized successfully" << std::endl;
	}
	else
		std::cout << "<" << this->getTarget() << ">" << "failed" << std::endl;
}