
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{

	try
	{
		Bureaucrat Btest1("Sarkozy", 20);
		Bureaucrat Btest111("Khadafi", 1);
		Form	*Ftest11 = new PresidentialPardonForm("James St. Patrick");
		Ftest11->beSigned(Btest1);
		Btest111.executeForm(*Ftest11);
		delete Ftest11;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}


	try
	{
		Bureaucrat Btest2("Ghost", 70);
		Bureaucrat Btest22("Tommy", 1);
		Form	*Ftest22 = new RobotomyRequestForm("James St. Patrick");
		Ftest22->beSigned(Btest2);
		Btest22.executeForm(*Ftest22);
		Btest22.executeForm(*Ftest22);
		Btest22.executeForm(*Ftest22);
		Btest22.executeForm(*Ftest22);
		Btest22.executeForm(*Ftest22);
		Btest22.executeForm(*Ftest22);
		delete Ftest22;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}


	try
	{
		Bureaucrat Btest3("Tommy", 140);
		Bureaucrat Btest33("Ghost", 19);
		Form	*Ftest33 = new ShrubberyCreationForm("Jardin");
		Ftest33->beSigned(Btest3);
		Btest33.executeForm(*Ftest33);
		delete Ftest33;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}

		Bureaucrat Btest4("Sarkozy", 148);
		Bureaucrat Btest44("Benard Arnault", 140);
		Form	*Ftest44 = new ShrubberyCreationForm("Jardin");
	try
	{
		Ftest44->beSigned(Btest4);
		Btest44.executeForm(*Ftest44);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
		delete Ftest44;
}
