#include <iostream>
#include <factorial.h>
int main() {
	std::cout << "What number do you want the factorial of?" << std::endl;
	int n;
	std::cin >> n;
  std::cout << "The factorial of " << n << " is: " << factorial(n) << std::endl;
	return 0;
}