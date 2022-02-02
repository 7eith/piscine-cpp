#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		Form	*(Intern::*tab[3])(std::string target);
	public:
		Intern();
		~Intern();

		Form	*makeForm(std::string FormName, std::string target);
		Form	*Shrubbery(std::string target);
		Form	*Request(std::string target);
		Form	*President(std::string target);

		class FormInconnuException : public std::exception
		{
			virtual const char *what() const throw();
		};
};

#endif