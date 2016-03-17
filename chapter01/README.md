# Chapter 1. Getting Started

##Exercise 1.1

> Review the documentation for your compiler and determine what file naming convention it uses. Compile and run the `main` program from page 2.

Install the last version of GCC with Brew:

```
brew install gcc
```

Invoke the GCC version of Brew (gcc-5) when run `g++` creating a symbolic link:

```
cd /usr/local/bin
ln -s  gcc-5  gcc
```

##Exercise 1.2

> Exercise 1.2: Change the program to return -1. A return value of -1 is often treated as an indicator that the program failed. Recompile and rerun your program to see how your system treats a failure indicator from main.

The result is 255 on Linux/Mac OS.

##[Exercise 1.3](ex_1_3.cpp)

##[Exercise 1.4](ex_1_4.cpp)

##[Exercise 1.5](ex_1_5.cpp)

##Exercise 1.6

> Explain whether the following program fragment is legal.

It's illegal because the left-hand operator must be an ostream object. It can be fixed removing the semicolons the first 2 semicolons:

```cpp
std::cout << "The sum of " << v1 
	<< " and " << v2
	<< " is " << v1 + v2 << std::endl;
```

##Exercise 1.7

> Compile a program that has incorrectly nested comments.

```cpp
int main()
{
	/*
	* this is an incorrect /* */ nested comment
	*
	*/

	return 0;
}
```

##Exercise 1.8

> Indicate which, if any, of the following output statements are legal:
```cpp
std::cout << "/*";
std::cout << "*/";
std::cout << /* "*/" */;
std::cout << /* "*/" /* "/*" */;
```
After you’ve predicted what will happen, test your answers by compiling a program with each of these statements. Correct any errors you encounter.

The illegal row is:

```cpp
std::cout << /* "*/" */;
```

Fix:

```cpp
std::cout << /* "*/" */";
```

##[Exercise 1.9](ex_1_9.cpp)
##[Exercise 1.10](ex_1_10.cpp)
##[Exercise 1.11](ex_1_11.cpp)

##Exercise 1.12

> What does the following for loop do? What is the final value of sum?
```cpp
int sum = 0;
for (int i = -100; i <= 100; ++i)
sum += i;
```

The result is 0. The for loop sums the positive and negative numbers between 0 and 100 (ie. -99 + 99, -88 + 88, etc).

##[Exercise 1.13](ex_1_13.cpp)

##Exercise 1.14

> Compare and contrast the loops that used a for with those using a while. Are there advantages or disadvantages to using either form?

In these examples, the advantage to use a for loop is that we don't need to instantiate the `val` variable and we don't need to increase manually the count of `val`.

##[Exercise 1.15](ex_1_15.cpp)

##[Exercise 1.16](ex_1_16.cpp)

##Exercise 1.17 and 1.18

> What happens in the program presented in this section if the input values are all equal? What if there are no duplicated values?

If the input values are all equal, it will print the count of the number. Otherwise, a line for each number.


