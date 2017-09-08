//
// Created by Andrii Lohashchuk on 9/6/17.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("nothing", "Presidential", PresidentialPardonForm::_sign, PresidentialPardonForm::_execute){

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, "Presidential", PresidentialPardonForm::_sign, PresidentialPardonForm::_execute){

}

PresidentialPardonForm::PresidentialPardonForm(
		PresidentialPardonForm const &src) {
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

// OVERLOAD

PresidentialPardonForm& PresidentialPardonForm::operator=(
		PresidentialPardonForm const &rhs) {
	return *this;
}

// Methods

void PresidentialPardonForm::execute(Bureaucrat const &executor) {
	Form::execute(executor);
	std::cout << "<" << this->getTarget() << ">" << " has been pardoned by Zafod Beeblebrox." << std::endl;
}