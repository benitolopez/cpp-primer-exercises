#include <iostream>

int main()
{
	int sum = 0;

	for (int i = -100; i <= 100; ++i)
		sum += i;

	// the result is 0
	// the for loop sums the positive and negative 
	// numbers between 0 and 100
	// ie. -99 + 99, -88 + 88, etc

	return 0;
}
