//
// Created by Andrii Lohashchuk on 9/6/17.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("nothing", "Shrubbery", ShrubberyCreationForm::_sign, ShrubberyCreationForm::_execute){

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, "Shrubbery", ShrubberyCreationForm::_sign, ShrubberyCreationForm::_execute){

}

ShrubberyCreationForm::ShrubberyCreationForm(
		ShrubberyCreationForm const &src) {
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

// OVERLOAD

ShrubberyCreationForm& ShrubberyCreationForm::operator=(
		ShrubberyCreationForm const &rhs) {
	return *this;
}

// Methods

void ShrubberyCreationForm::execute(Bureaucrat const &executor) {
	Form::execute(executor);

	std::ofstream file;
	std::string name = this->getTarget();
	name += "_shrubbery";
	file.open(name);
	std::cout << "TREE" << std::endl;
	file.close();
}