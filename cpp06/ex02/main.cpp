#include <cstdlib>
#include <iostream>

class Base
{
	public:
		virtual ~Base(){};
};

class A:public Base{};
class B:public Base{};
class C:public Base{};


Base * generate(void)
{
	Base *ret;
	std::srand(std::time(nullptr));
	int random_num = std::rand() % 3;

	if (random_num == 0)
		ret = new A();
	else if (random_num == 1)
		ret = new B();
	else
		ret = new C();
	std::cout << random_num << std::endl;
	return (ret);
}

void	identify(Base &p)
{
	(void)p;
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Type is [A]" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type is [B]" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type is [C]" << std::endl;
	return ;
}

int main(void)
{
	Base *base;

	base = generate();
	identify(base);
	identify(*base);

	delete base;
}
