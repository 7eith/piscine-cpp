#include "Base.hpp"
#include <stdlib.h>
#include <iostream>

Base * generate(void)
{
	srand((unsigned int)time(0));
	int valeur = rand() %3 +1;
	if (valeur == 1)
	{
//		std::cout << "A generate" << std::endl;
		return new A;
	}
	else if (valeur == 2)
	{
//		std::cout << "B generate" << std::endl;
		return new B;
	}
	else
	{
//		std::cout << "C generate" << std::endl;
		return new C;
	}
}

void identify(Base * p)
{
	A *a = dynamic_cast<A*>(p);
	if (a != NULL)
	{
		std::cout << "A" << std::endl;
		return ;
	}
	B *b = dynamic_cast<B*>(p);
	if (b != NULL)
	{
		std::cout << "B" << std::endl;
		return ;
	}
	C *c = dynamic_cast<C*>(p);
	if (c != NULL)
		std::cout << "C" << std::endl;
}

void identify(Base & p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(std::exception &b)
	{
		;
	}
	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch(std::exception &b)
	{
		;
	}
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch(std::exception &b)
	{
		;
	}
}

int main()
{
	Base *test = generate();
	identify(test);
	identify(*test);
	delete test;
	return (0);
}
