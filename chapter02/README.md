# Chapter 2. Variables and Basic Types

##Exercise 2.1

> What are the differences between int, long, long long, and short? Between an unsigned and a signed type? Between a float and a double?

The minimum size of `short` and `int` is 16 bits, `long ` 32 bits and `long long` 64 bits. So `int` will be at least as large as `short`, a `long` at least as large as an `int`, and `long long` at least as large as `long`.

A `signed` type represents negative or positive numbers (including zero). An `unsigned` type represents only numbers greater than or equal to zero.

Typically `floats` are represented in one word (32 bits), `doubles` in two words (64 bits). `floats` usually don't have enough precision.
