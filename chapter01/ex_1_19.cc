#include <iostream>

int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;

	if (v1 > v2) {
		int temp = v1;
		v1 = v2;
		v2 = temp;
	}

	std::cout << "The numbers between " << v1 << " and " << v2 << " are:" << std::endl;

	int val = v1 + 1;

	while (val < v2) {
		std::cout << val << std::endl;
		++val;
	}

	return 0;
}
