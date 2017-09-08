//
// Created by Andrii Lohashchuk on 9/4/17.
//

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
public:

	class GradeTooHighException : public std::exception{
	public:

		GradeTooHighException();
		virtual ~GradeTooHighException() throw();

		GradeTooHighException &operator=(GradeTooHighException const & rhs);

		virtual const char* what() throw();
	};

	class GradeTooLowException : public std::exception{
	public:

		GradeTooLowException();
		virtual ~GradeTooLowException() throw();

		GradeTooLowException &operator=(GradeTooLowException const & rhs);

		virtual const char* what() throw();
	};

	class IsNotSignForm : public std::exception{
	public:

		IsNotSignForm();
		virtual ~IsNotSignForm() throw();

		IsNotSignForm &operator=(IsNotSignForm const & rhs);

		virtual const char* what() throw();
	};

private:

	std::string _name;
	std::string _target;
	int         _grade;
	int         _execute;
	bool        _sign;

public:

	Form();
	Form(std::string target, std::string name, int grade, int execute);
	Form(Form const & src);
	~Form();

	Form &operator=(Form const & rhs);

	// GETTER

	std::string getName() const;
	std::string getTarget() const;
	int getGrade() const;
	int getExecute() const;
	bool getSign() const;

	// Methods

	void beSigned(Bureaucrat &b);
	virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream & operator<<(std::ostream & o, Form & rhs);

#endif
