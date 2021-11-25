#include "Fixed.hpp"
int main(void)
{
    Fixed x(4);
     Fixed y(0);
     std::cout << x << " + " << y << " = " << x + y << std::endl;
     std::cout << x << " - " << y << " = " << x - y << std::endl;
     std::cout << x << " * " << y << " = " << x * y << std::endl;
     std::cout << x << " / " << y << " = " << x / y << std::endl;
     std::cout << 4.0 / 0.0 << std::endl;


     Fixed c(7.5f);
     Fixed d(2.2f);
     std::cout << c + d << std::endl;

// return (0);

    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;
    return 0;
}