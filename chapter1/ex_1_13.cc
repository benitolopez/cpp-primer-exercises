#include <iostream>

// Exercise 1.9 with for loop

int main()
{
	int sum = 0;

	for (int i = 50; i <= 100; ++i)
		sum += i;

	std::cout << "Sum from 50 to 100 is " << sum << std::endl;

	return 0;
}

// Exercise 1.10 with for loop

int main()
{
	for (int i = 10; i >= 0; --i)
		std::cout << i << std::endl;

	return 0;
}

// Exercise 1.11 with for loop

int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The numbers between " << v1 << " and " << v2 << " are:" << std::endl;

	for (int i = v1 + 1; i < v2; ++i)
		std::cout << i << std::endl;

	return 0;
}
