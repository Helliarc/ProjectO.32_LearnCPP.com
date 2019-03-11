#include <iostream>

bool isEven(int x)
{
	return (x % 2) == 0;
}

int main()
{
	std::cout << "Enter an Integer: ";
	int x{};
	std::cin >> x;
	
	if (isEven(x))
		std::cout << x << " is an even integer. \n";
	else
		std::cout << x << " is an odd integer. \n";
	
	return 0;
}
