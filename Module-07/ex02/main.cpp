#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<int> num(180);

	try
	{
		num[2] = 15;
		std::cout << num[2] << std::endl;
		std::cout << num.size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}