#include "Intern.hpp"

int main()
{

	try
	{
		Bureaucrat Btest1("Franck Underwood", 4);
		Intern test1;
		Form *Ftest1;
		Ftest1 = test1.makeForm("presidential pardon", "Doug");
		Ftest1->beSigned(Btest1);
		Btest1.executeForm(*Ftest1);
		delete Ftest1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}

	try
	{
		Bureaucrat Btest2("Lord Zord", 2);
		Intern test2;
		Form *Ftest2;
		Ftest2 = test2.makeForm("bizarre", "this fail");
		Ftest2->beSigned(Btest2);
		Btest2.executeForm(*Ftest2);
		delete Ftest2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}
}
