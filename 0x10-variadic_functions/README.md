0x10.C-Variadic functions

0. Beauty is variable, ugliness is constant
Write a function that returns the sum of all parameters.
	Prototype: int sum_them_all(const unsigned in n, ..);
	if n == 0, return 0

1. To be is to be the value of a variable
Write a function that prints numbers, followed by a new line.
	Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
	where separator is the string to be printed between numbers
	and n is the number of integers passed to the function
	You are allowed to use printf
	if separator is NULL, don't print
	Print a new line at the end of your function

2. One woman's constant is another woman's variable
Write a function that prints strings, followed by a new line.
	Prototype: void print_strings(const char *separator, const unsigned int n, ...);
	where separator is the string to be printed between the strings
	and n is the number of strings passed to the function
	you are allowed to use printf
	if separator is NULL, don't print it
	if one of the string is NULL, print (nill) instead
	Print a new line at the end of your function
3. To be is to be the value of a variable
Write a function that prints anything
	prototype: void print_all(const char *const format, ...);
	where format is a list of types of arguments passed to the function
		c: char
		i: integer
		f: float
		s: char * (if the string is NULL, print (nil) instead
		any other char should be ignored
		see example
	you are not allowed to use for, goto, ternary operator, else, do...while
	you can use a maximum of
		2 while loops
		2 if
	you can declare a maxmum of 9 variables
	you are allowed to use printf
	print a new line at the end of your function
