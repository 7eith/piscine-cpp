#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{

	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat(const std::string name, int note);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();

		Bureaucrat	&operator=(const Bureaucrat &);

		virtual std::string	getName() const;
		virtual int			getGrade() const;
		void		Increment();
		void		Decrement();
		void		SignForm(Form &);

		class GradeTooHighException: public std::exception
		{
			virtual const char *what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			virtual const char *what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &);

#endif
