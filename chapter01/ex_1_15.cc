#include <iostream>

// syntax error (12)

int main()
{
	int sum = 0;

	for (int i = 50; i <= 100; ++i)
		sum += i;

	std::cout << "Sum from 50 to 100 is " << sum << std::endl:

	return 0;
}

// type error (21)

int main()
{
	int val = "Hello", sum = 0;

	while (val <= 100)
		sum += val;
		++val;

	std::cout << "Sum from 50 to 100 is " << sum << std::endl;

	return 0;
}

// declaration error (39)

int main()
{
	int sum = 0;

	for (int i = 50; i <= 100; ++i)
		val += i;

	std::cout << "Sum from 50 to 100 is " << sum << std::endl;

	return 0;
}
