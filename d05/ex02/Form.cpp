//
// Created by Andrii Lohashchuk on 9/4/17.
//
#include "Form.hpp"

Form::GradeTooHighException::GradeTooHighException() {
	return;
}

Form::GradeTooLowException::GradeTooLowException() {
	return;
}

Form::IsNotSignForm::IsNotSignForm() {

}

Form::GradeTooHighException::~GradeTooHighException() throw(){
	return;
}

Form::GradeTooLowException::~GradeTooLowException() throw(){
	return;
}

Form::IsNotSignForm::~IsNotSignForm() throw(){

}

const char* Form::GradeTooHighException::what() throw(){
	return "Too high level";
}

const char* Form::GradeTooLowException::what() throw(){
	return "Too low level";
}

const char* Form::IsNotSignForm::what() throw(){
	return "Form is not sign";
}

// FORM

Form::Form() :_target("nothing"), _name("form"), _grade(1), _execute(1), _sign(false){
}

Form::Form(std::string target, std::string name, int grade, int execute) : _target(target), _name(name), _grade(grade), _execute(execute), _sign(false) {
	if (_grade > 150 || _execute > 150)
		throw Bureaucrat::GradeTooLowException();
	if (_grade < 1 || _execute < 1)
		throw Bureaucrat::GradeTooHighException();
}

Form::Form(Form const &src) {
	this->_name = src._name;
	this->_grade = src._grade;
	this->_execute = src._execute;
	this->_sign = src._sign;
	return;
}

Form::~Form() {
	return;
}

// OVERLOAD

Form::GradeTooHighException& Form::GradeTooHighException::operator=(
		GradeTooHighException const &rhs) {
	(void)rhs;
	return *this;
}

Form::GradeTooLowException& Form::GradeTooLowException::operator=(
		GradeTooLowException const &rhs) {
	(void)rhs;
	return *this;
}

Form& Form::operator=(Form const &rhs) {
	_grade = rhs._grade;
	return *this;
}

IsNotSignForm& Form::IsNotSignForm::operator=(IsNotSignForm const &rhs) {
	(void)rhs;
	return *this;
}

std::ostream &operator<<(std::ostream & o, Form & rhs)
{
	o << "Name: " << rhs.getName() << " Grade Sign: " << rhs.getGrade()
	  << " Grade Execute: " << rhs.getExecute() << " Signed: " << rhs.getSign()
	  << std::endl;
	return o;
}

//GETTER

std::string Form::getName() const {
	return this->_name;
}

std::string Form::getTarget() const {
	return this->_target;
}

int Form::getGrade() const {
	return this->_grade;
}

int Form::getExecute() const {
	return this->_execute;
}

bool Form::getSign() const {
	return this->_sign;
}

// Methods

void Form::beSigned(Bureaucrat &b) {
	if (b.getGrade() > _grade)
		throw Form::GradeTooLowException();
	else
		_sign = true;
}

void Form::execute(Bureaucrat const &executor) const {
	if (!this->getSign())
		throw Form::IsNotSignForm();
	else if (this->getExecute() < executor.getGrade())
		throw Form::GradeTooLowException();
}