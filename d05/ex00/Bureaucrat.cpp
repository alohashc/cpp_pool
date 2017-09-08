#include "Bureaucrat.hpp"//
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

//Bureaucrat::Bureaucrat(){
//	this->_name = "bob";
//	this->_grade = 150;
//	return;
//}

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
	return *this;
}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(
		GradeTooLowException const &rhs) {
	return *this;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs) {
	_grade = rhs._grade;
	return *this;
}

// GETTER

std::string Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}