//
// Created by Andrii Lohashchuk on 9/3/17.
//
#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException() {
	return;
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {
	return;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){
	return;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){
	return;
}

Bureaucrat::Bureaucrat(){
	this->_name = "bur";
	this->_grade = 1;
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat() {
	return;
}

void Bureaucrat::gradePlus() {
	if (getGrade() - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = getGrade() - 1;
}

void Bureaucrat::gradeMinus() {
	if (getGrade() + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = getGrade() + 1;
}

void Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << "<" << _name << "> signs <" << form.getName() << ">" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "<" << _name << "> cannot sign <" << form.getName() << "> because <"
		          << e.what() << ">" << std::endl;
	}
}

void Bureaucrat::executeForm(Form const &form) {
	try
	{
		form.execute(*this);
		std::cout << "Bureaucrat " << this->getName() << " execute " << form.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Execute error: bureaucrat didn't execute form because " << e.what() << std::endl;
	}

}

// EXCEPTION

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "Too High level";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Too Low level";
}

//OVERLOAD

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(
		GradeTooHighException const &rhs) {
	(void)rhs;
	return *this;
}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(
		GradeTooLowException const &rhs) {
	(void)rhs;
	return *this;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs) {
	_grade = rhs._grade;
	return *this;
}

std::ostream &operator<<(std::ostream & o, Bureaucrat & rhs)
{
	o << "Name: " << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return o;
}

// GETTER

std::string Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}