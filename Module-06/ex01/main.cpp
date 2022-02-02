#include <stdint.h>
#include <iostream>

struct		Data
{
	int		i;
};

uintptr_t		serialize(Data *ptr)
{
	return (reinterpret_cast<intptr_t>(ptr));
}

Data			*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int				main(void)
{
	Data	data;
	Data	*ptrData;

	std::cout << &data << std::endl;
	(ptrData) = deserialize((serialize(&data)));
	
	std::cout << ptrData << std::endl;
	ptrData->i = 78;

	std::cout << ptrData->i << std::endl;
	data.i = 42;

	std::cout << ptrData->i << std::endl;
	return (0);
}