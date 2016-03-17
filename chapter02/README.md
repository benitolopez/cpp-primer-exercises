# Chapter 2. Variables and Basic Types

##Exercise 2.1

> What are the differences between int, long, long long, and short? Between an unsigned and a signed type? Between a float and a double?

The minimum size of `short` and `int` is 16 bits, `long ` 32 bits and `long long` 64 bits. So `int` will be at least as large as `short`, a `long` at least as large as an `int`, and `long long` at least as large as `long`.

A `signed` type represents negative or positive numbers (including zero). An `unsigned` type represents only numbers greater than or equal to zero.

Typically `floats` are represented in one word (32 bits), `doubles` in two words (64 bits). `floats` usually don't have enough precision.

##Exercise 2.2

> To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.

`double` type for all. The reason is that three values usually contain decimal digits, which means that we can't use `int` types. Another reason for choosing `double` instead of `float` is that `float` usually not precise enough.

But probably, the best way for money amounts is to use an `int` type and then divide it to 100. Let say we want to store $450.45. 450.45 equals to 45045/100.

##Exercise 2.3 and 2.4

> What output will the following code produce?
```cpp
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;
int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u << std::endl;
std::cout << u - i << std::endl;
```

Output:

```
32
4294967264
32
-32
0
0
```

##Exercise 2.5

> Determine the type of each of the following literals. Explain the differences among the literals in each of the four examples:
```cpp
(a) 'a', L'a', "a", L"a"
(b) 10, 10u, 10L, 10uL, 012, 0xC
(c) 3.14, 3.14f, 3.14L
(d) 10, 10u, 10., 10e-2
```

(a): character literal, wide character literal, string literal, string wide character literal.

(b): decimal, unsigned decimal, long decimal, unsigned long decimal, octal, hexadecimal.

(c): double, float, long double.

(d): decimal, unsigned decimal, double, double.

##Exercise 2.6

> What, if any, are the differences between the following definitions:
```cpp
int month = 9, day = 7;
int month = 09, day = 07;
```

`int month = 9, day = 7` are decimals.

`month = 09` is invalid, because octal don't have digit 9. `day = 07` is octal.

##Exercise 2.7

> What values do these literals represent? What type does each have?
```cpp
(a) "Who goes with F\145rgus?\012"
(b) 3.14e1L
(c) 1024f
(d) 3.14L
```

(a) Who goes with Fergus?(new line) / `string`
(b) 31.4 / `long double`
(c) Error, suffix f is valid only with floating point literals
(d) 3.14 / `long double`

##[Exercise 2.8](ex_2_8.cc)

##Exercise 2.9

> What values do these literals represent? What type does each have?
```cpp
(a) std::cin >> int input_value;
(b) int i = { 3.14 };
(c) double salary = wage = 9999.99;
(d) int i = 3.14;
```

(a) Error. It can be fixed with:

```cpp
int input_value = 0;
std::cin >> input_value;
```

(b) Error. Narrowing conversion from `double` to `int`. Fix:

```cpp
double i = { 3.14 };
```

(c) Error. `wage` not declared. Fix:

```cpp
double wage;
double salary = wage = 9999.99;
```

(d) Legal, but the value will be truncated to 3.

##Exercise 2.10

> What are the initial values, if any, of each of the following variables?
```cpp
std::string global_str;
int global_int;
int main()
{
    int local_int;
    std::string local_str;
}
```

`global_str`: empty string.
`global_int`: 0.
`local_int`: 0.
`local_str`: empty string.

##Exercise 2.11

> Explain whether each of the following is a declaration or a definition:
```cpp
(a) extern int ix = 1024;
(b) int iy;
(c) extern int iz;
```

(a) Definition
(b) Definition
(c) Declaration

##Exercise 2.12

> Which, if any, of the following names are invalid?
```cpp
(a) int double = 3.14;
(b) int _;
(c) int catch-22;
(d) int 1_or_2 = 1;
(e) double Double = 3.14;
```

`a`, `c` and `d`.
