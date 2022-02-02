
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "-=------------------------------------------------=-" << std::endl;


	try
	{
		Bureaucrat hermes("Hermes", 75);
		Form	dossierSecret("DossierSecret", 28, 10);
		std::cout << dossierSecret;
		dossierSecret.beSigned(hermes);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}
	std::cout << "-=------------------------------------------------=-" << std::endl;

	try
	{
		Bureaucrat nibbler("Nibbler", 12);
		Form	nibblerFolder("nibblerFolder", 20, 15);
		std::cout << nibblerFolder;
		nibblerFolder.beSigned(nibbler);
		std::cout << nibblerFolder;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-=------------------------------------------------=-" << std::endl;

	try
	{

		Bureaucrat fry("Fry", 150);
		std::cout << fry << std::endl;
		Form	folderForgot("ForgottenFolder", 220, 15);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}
}
