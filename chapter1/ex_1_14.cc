#include <iostream>

// with while loop

int main()
{
	int sum = 0, val = 50;

	while (val <= 100) {
		sum += val;
		++val;
	}
	std::cout << "Sum from 50 to 100 is " << sum << std::endl;

	return 0;
}

// with for loop

int main()
{
	int sum = 0;

	for (int i = 50; i <= 100; ++i)
		sum += i;

	std::cout << "Sum from 50 to 100 is " << sum << std::endl;

	return 0;
}

// the advantage to use a for loop is that we don't need to instanciate 
// the val variable and we don't need to increase manually the count of val
