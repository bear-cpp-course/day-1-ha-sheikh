#include <iostream>
int main()
{
  int a{1};
  a = 4;
  std::cout << a << std::endl;

  int b{a};
  b = 3;
  std::cout << b << std::endl;

  double c{3};
  std::cout << c << std::endl;
}
