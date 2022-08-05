#include "MutantStack.hpp"
#include <list>

int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(6);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		std::cout << mstack.top() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		std::cout << "begin = " << *it << std::endl;
		std::cout << "end = " << *ite << std::endl;
		++it;
		--it;
		std::cout << std::endl;
		while (it != ite)
		{
			std::cout << "	" << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	std::cout << "\nsecond test" << std::endl;
	{
		std::list<int> lst;
		lst.push_back(6);
		lst.push_back(17);
		lst.pop_back();
		lst.push_back(3);
		lst.push_back(5);
		lst.push_back(737);
		lst.push_back(0);
		std::list<int>::iterator itr = lst.begin();
		while (itr != lst.end())
		{
			std::cout << "	" << *itr << std::endl;
			itr++;
		}
	}



	{
		//char test
		MutantStack<std::string> str;
		str.push("abc");
		str.push("rgx");
		std::cout << "top = " << str.top() << std::endl;
		std::cout << "size = " << str.size() << std::endl;
		str.push("prime");
		str.push("prism");
		str.push("Oni");
		MutantStack<std::string>::iterator it = str.begin();
		++it;
		--it;
		std::cout << std::endl;
		while (it != str.end())
		{
			std::cout << "	" << *it << std::endl;
			++it;
		}
	}

	return 0;
}