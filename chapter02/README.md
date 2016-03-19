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

##Exercise 2.13

> What is the value of j in the following program?
```cpp
int i = 42;
int main()
{
    int i = 100;
    int j = i;
}
```

`100`.

##Exercise 2.14

> Is the following program legal? If so, what values are printed?
```cpp
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
    sum += i;
std::cout << i << " " << sum << std::endl;
```

Legal. `100 45`. But is considered a bad practice using a local variable with the same name of a global variable.

##Exercise 2.15

> Which of the following definitions, if any, are invalid? Why?
```cpp
(a) int ival = 1.01;
(b) int &rval1 = 1.01;
(c) int &rval2 = ival;
(d) int &rval3;
```

(a) Valid (but the value will be truncated).

(b) Invalid. Initializer must be an object.

(c) Valid.

(d) Invalid. A reference must be initialized.

##Exercise 2.16

> Which, if any, of the following assignments are invalid? If they are valid, explain what they do.
```cpp
int i = 0, &r1 = i; double d = 0, &r2 = d;
(a) r2 = 3.14159;
(b) r2 = r1;
(c) i = r2;
(d) r1 = d;
```

(a) Valid.

(b) Valid.

(c) Valid (but the value will be truncated).

(d) Valid (but the value will be truncated).

##Exercise 2.17

> What does the following code print?
```cpp
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;
```

`10 10`.

##Exercise 2.18

> Write code to change the value of a pointer. Write code to change the value to which the pointer points.

```cpp
int a = 40, b = 20;
int *pa = &a, *pb = &b;

// change the value of a pointer
pa = &b;

// change the value to which the pointer points
*pb = 30;
```

##Exercise 2.19

> Explain the key differences between pointers and references.

A pointer is an object in its own right and it need not be initialized at the time is defined. Also, a pointer can be assigned and copied or it can point to several different objects over its lifetime. 

##Exercise 2.20

> What does the following program do?
```cpp
int i = 42;
int *p1 = &i; *p1 = *p1 * *p1;
```

`p1` points to `i` (`i` equals to `42`). Then the value of `i` is changed to 1764.

##Exercise 2.21

> Explain each of the following definitions. Indicate whether any are illegal and, if so, why.
```cpp
int i = 0;
(a) double* dp = &i;
(b) int *ip = i;
(c) int *p = &i;
```

(a) Illegal. Different types.

(b) Illegal. Cannot assign an integer to a pointer.

(c) Legal.

##Exercise 2.22

> Assuming p is a pointer to int, explain the following code:
```cpp
if (p) // ...
if (*p) // ...
```

`if (p) // ...` returns `false` if the value of `p` is 0. Otherwise it returns `true`.

`if (*p) // ...` returns `false` if the value pointed by `p` is 0. Otherwise it returns `true`.

##Exercise 2.23

> Given a pointer p, can you determine whether p points to a valid object? If so, how? If not, why not?

No.

##Exercise 2.24

> Why is the initialization of p legal but that of lp illegal?
```cpp
int i = 42;
void *p = &i;
long *lp = &i;
```

`long *lp = &i;` is illegal because they are different types. 

`void *p = &i;` is legal because `void` is a special pointer that may point to any type.

##Exercise 2.25

> Determine the types and values of each of the following variables.
```cpp
(a) int* ip, i, &r = i;
(b) int i, *ip = 0;
(c) int* ip, ip2;
```

(a) `ip` is a pointer to `int`, `i` is an `int`, `r` is a reference to `i` (`int`).

(b) `i` is an `int`, `ip` is a null pointer.

(c) `ip` is a pointer to `int`, `ip2` is an `int`.

##Exercise 2.26

> Which of the following are legal? For those that are illegal, explain why.
```cpp
(a) const int buf;
(b) int cnt = 0;
(c) const int sz = cnt;
(d) ++cnt; ++sz;
```

(a) Illegal. A `const` must be initialized.

(b) Legal.

(c) Legal.

(d) Illegal, the value of a `const` (`sz`) can't be modified.

##Exercise 2.27

> Which of the following initializations are legal? Explain why.
```cpp
(a) int i = -1, &r = 0; 
(b) int *const p2 = &i2; 
(c) const int i = -1, &r = 0;
(d) const int *const p3 = &i2; 
(e) const int *p1 = &i2; 
(f) const int &const r2;
(g) const int i2 = i, &r = i;
```

(a) Illegal, `r` must refer to an object.

(b) Legal.

(c) Legal.

(d) Legal.

(e) Legal.

(f) Illegal, a reference cannot be const.

(g) Legal.

##Exercise 2.28

> Explain the following definitions. Identify any that are illegal.
```cpp
(a) int i, *const cp;
(b) int *p1, *const p2;
(c) const int ic, &r = ic;
(d) const int *const p3;
(e) const int *p;
```

(a) Illegal, `cp` must be initialized.

(b) Illegal, `p2` must be initialized.

(c) Illegal, `ic` must be initialized.

(d) Illegal, `p3` must be initialized.

(e) Legal, pointer to const int.

##Exercise 2.29

> Using the variables in the previous exercise, which of the following assignments are legal? Explain why.
```cpp
(a) i = ic;
(b) p1 = p3;
(c) p1 = &ic;
(d) p3 = &ic;
(e) p2 = p1;
(f) ic = *p3;
```

(a) Legal.

(b) Illegal, `p3` is a pointer to const int.

(c) Illegal, `ic` is a const int.

(d) Illegal, `p3` is a const pointer.

(e) Illegal, `p2` is a const pointer.

(f) Illegal, `ic` is a const int.

##Exercise 2.30

> For each of the following declarations indicate whether the object being declared has top-level or low-level const.
```cpp
const int v2 = 0; int v1 = v2;
int *p1 = &v1, &r1 = v1;
const int *p2 = &v2, *const p3 = &i, &r2 = v2;
```

`v2` is top-level const.

`p2v` is low-level const.

`p3` is both low-level and top-level const.

`r2` is low-level const.

##Exercise 2.31

> Given the declarations in the previous exercise determine whether the following assignments are legal. Explain how the top-level or low-level const applies in each case.
```cpp
(a) r1 = v2;
(b) p1 = p2;
(c) p2 = p1;
(d) p1 = p3;
(e) p2 = p3;
```

(a) Legal.

(b) Illegal.

(c) Legal.

(d) Illegal.

(e) Legal.

##Exercise 2.32

> Is the following code legal or not? If not, how might you make it legal?
```cpp
int null = 0, *p = null;
```

Illegal. Fix:

```cpp
int null = 0, *p = nullptr;
```

##Exercise 2.33

> Using the variable definitions from this section, determine what happens in each of these assignments:
```cpp
(a) a = 42; // set 42 to int a.
(b) b = 42; // set 42 to int b.
(c) c = 42; // set 42 to int c.
(d) d = 42; // ERROR, d is an int *. correct: *d = 42;
(e) e = 42; // ERROR, e is an const int *. correct: e = &c;
(f) g = 42; // ERROR, g is a const int& that is bound to ci.
```

(a) Set 42 to int `a`.

(b) Set 42 to int `b`.

(c) Set 42 to int `c`.

(d) Error, `d` is an int *. correct: `*d = 42;`

(e) Error, `e` is an const int *. `correct: e = &c;`

(f) Error, `g` is a const int& that is bound to `ci`.

##[Exercise 2.34](ex_2_34.cc)

##[Exercise 2.35](ex_2_35.cc)
