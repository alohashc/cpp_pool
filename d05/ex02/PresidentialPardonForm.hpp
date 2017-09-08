//
// Created by Andrii Lohashchuk on 9/6/17.
//

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form{
private:

	static const int _sign;
	static const int _execute;

public:

	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	~PresidentialPardonForm();

	PresidentialPardonForm &operator=(PresidentialPardonForm const & rhs);

	void execute(Bureaucrat const & executor);
};


#endif
