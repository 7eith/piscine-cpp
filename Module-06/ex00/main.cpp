#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string.h>
#include <cmath>
#include <cfloat>
#include <cstring>
#include <climits>

int		main(int argc, char **args)
{
	char		_char;
	int			_integer;
	double		_double;
	float		_float;
	std::string	input;

	if (argc != 2)
	{
		std::cout << "Program takes one argument." << std::endl;
		return (0);
	}

	input = args[1];

	if (std::strlen(args[1]) == 1)
	{
		_char = input[0];
		if (_char >= 48 && _char <= 57)
			_double = static_cast<double>(_char - 48);
		else
			_double = static_cast<double>(_char);
	}
	else
	{
		try {
			_double = std::atof(args[1]);
		}
		catch (std::exception &e) {
			std::cout << "Not a valid value" << std::endl;
			return (0);
		}
	}

	_char = static_cast<char>(_double);

	if (_double > 127 || _double < 30 || std::isnan(_double) == true)
		std::cout << "char: impossible" << std::endl;
	else if (std::isprint(_char) == 0)
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: " << _char << std::endl;
	
	_integer = static_cast<int>(_double);

	if (_double > INT_MAX || _double < INT_MIN || std::isnan(_double) == true)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << _integer << std::endl;
	
	_float = static_cast<float>(_double);

	std::cout << "float: " << std::fixed << std::setprecision(1) << _float << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << _double << std::endl;
}