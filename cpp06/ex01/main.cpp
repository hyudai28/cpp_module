#include <iostream>
#include <cstdint>
#include <stdint.h>

struct Data
{
	int num;
	std::string str;
};

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t num)
{
	return (reinterpret_cast<Data *>(num));
}

int main(void)
{
	Data data = {1, "abc"};
	uintptr_t num_ptr = serialize(&data);
	Data *ptr = deserialize(num_ptr);
	std::cout << ptr << std::endl;
	std::cout << &data << std::endl;
	if (ptr == &data)
		std::cout << "same" << std::endl;
	else
		std::cout << "diff" << std::endl;
	std::cout << "num: " << ptr->num << std::endl;
	std::cout << "str: " << ptr->str << std::endl;
	std::cout << num_ptr << std::endl;
}
