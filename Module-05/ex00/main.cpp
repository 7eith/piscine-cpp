
#include "Bureaucrat.hpp"

int main()
{
	std::cout << "Welcome to Futurama" << std::endl;

	std::cout << "-=------------------------------------------------=-" << std::endl;
	try
	{
		Bureaucrat hermes("Hermes", 78);
		std::cout << hermes << std::endl;
		hermes.Decrement();
		std::cout << hermes << std::endl;
		hermes.Increment();
		std::cout << hermes << std::endl;
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
		fry.Decrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}
	std::cout << "-=------------------------------------------------=-" << std::endl;

	try
	{
		Bureaucrat nibbler("Nibbler", 1);
		std::cout << nibbler << std::endl;
		nibbler.Increment();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}

	std::cout << "-=------------------------------------------------=-" << std::endl;

	try
	{
		Bureaucrat test4("Leela", 158);
	}
	catch(const std::exception& e)
	{
		std::cout << "Leela ";
		std::cerr << e.what() << '\n' << std::endl;
	}
	std::cout << "-=------------------------------------------------=-" << std::endl;

	try
	{
		Bureaucrat Scruffy("Scruffy", -12);
	}
	catch(const std::exception& e)
	{
		std::cout << "Scruffy ";
		std::cerr << e.what() << '\n' << std::endl;
	}


}
