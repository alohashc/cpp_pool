//
// Created by Andrii Lohashchuk on 9/3/17.
//

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat{
private:

	std::string _name;
	int _grade;

public:

	class GradeTooHighException : public std::exception{
	public:
		GradeTooHighException();
		virtual ~GradeTooHighException() throw();

		GradeTooHighException &operator=(GradeTooHighException const & rhs);

		virtual const char * what() const throw();

	};
	class GradeTooLowException : public std::exception{
	public:
		GradeTooLowException();
		virtual ~GradeTooLowException() throw();

		GradeTooLowException &operator=(GradeTooLowException const & rhs);

		virtual const char * what() const throw();
	};

	~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat const &rhs);

	// GETTER

	std::string getName() const;
	int getGrade() const;

	void gradePlus();
	void gradeMinus();
};

std::ostream & operator<<(std::ostream & o, Bureaucrat & rhs);

#endif
