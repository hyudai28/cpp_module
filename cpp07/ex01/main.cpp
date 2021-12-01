#include "iter.hpp"

int main( void )
{
	int int_ary[] = {0, 1, 2};
	iter(int_ary, 3, ft_print);
	std::cout << std::endl;




	const int int_cAry[] = {5, 6, 7};
	iter(int_cAry, 3, ft_print);
	std::cout << std::endl;
	

	char chr_iter[] = "aiueo";
	iter(chr_iter, 5, ft_print);
	std::cout<<std::endl;

}