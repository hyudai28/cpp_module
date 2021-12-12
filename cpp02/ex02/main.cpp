#include "Fixed.hpp"
int main(void)
{
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << "a  :" << a << std::endl;
    std::cout << "++a:" << ++a << std::endl;
    std::cout << "a  :" << a << std::endl;
    std::cout << "a++:" << a++ << std::endl;
    std::cout << "a  :" << a << std::endl;
    std::cout << "b  :" << b << std::endl;
    std::cout << "max:" << Fixed::max(a, b) << std::endl;
    std::cout << "min:" << Fixed::min(a, b) << std::endl;
    std::cout << "--a:" << --a << std::endl;


std::cout << "\n-----comparison operator----" << std::endl;
    if (a < b)
        std::cout << "a < b : a=" << a << std::endl;
    else
        std::cout << "a < b : b=" << b << std::endl;
    if (a > b)
        std::cout << "a > b : a=" << a << std::endl;
    else
        std::cout << "a > b : b=" << b << std::endl;
    if (a == a)
        std::cout << "true" << std::endl;
    else
        std::cout << "error" << std::endl;

    if (a != a)
        std::cout << "error" << std::endl;
    else
        std::cout << "true" << std::endl;

}

{
std::cout << "\n-----arithmetic----" << std::endl;
    Fixed d(3.5f);
    Fixed const e(Fixed(5.05f));

    std::cout <<"d + e = " << d + e << std::endl;
    std::cout <<"d + e = " << 3.5f + 5.05f << std::endl;

    std::cout <<"d - e = " << d - e << std::endl;
    std::cout <<"d - e = " << 3.5f - 5.05f << std::endl;

    std::cout <<"d * e = " << d * e << std::endl;
    std::cout <<"d * e = " << 3.5f * 5.05f << std::endl;

    std::cout <<"d / e = " << d / e << std::endl;
    std::cout <<"d / e = " << 3.5f / 5.05f << std::endl;


}
/*
    const Fixed c(1.5f);
    const Fixed d(Fixed(5.05f) * Fixed(2));
    std::cout << Fixed::max(c, d) << std::endl;
    std::cout << Fixed::min(c, d) << std::endl;


*/

    return 0;
}