#include "easyfind.hpp"

int main()
{
	int		res;


	std::vector<int> test1(10, 15);
	test1.push_back(-8);
	res = easyfind(test1, 8);
	std::cout << res << std::endl;
	
	test1.push_back(8);
	res = easyfind(test1, 8);
	std::cout << res << std::endl;
	return (0);
}
