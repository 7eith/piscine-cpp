#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int note) : _name(name), _grade(note)
{
	if (note < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (note > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (&copy != this)
		this->_grade = copy.getGrade();
	return (*this);
}

void		Bureaucrat::Increment()
{
	if ((this->_grade - 1) < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void		Bureaucrat::Decrement()
{
	if ((this->_grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

std::ostream	&operator<<(std::ostream &stream, Bureaucrat const &bureaucrat)
{
	stream << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return (stream);
}

const char		*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char		*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

std::string		Bureaucrat::getName() const
{
	return (this->_name);
}

int				Bureaucrat::getGrade() const
{
	return (this->_grade);
}