#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	ft_printf("ft_printf: %d\n", 42);
	printf("printf: %d\n", 42);
	ft_printf("ft_printf: %d\n", 4.4);
	printf("printf: %f\n", 4.4);
	ft_printf("ft_printf: %i\n", 4.5);
	/*printf("printf: %f\n ", 4.5);
	ft_printf("ft_printf: %p\n", NULL);
	printf("printf: %p\n", NULL);
	//test cases for specifer %c edge cases
	ft_printf("ft_printf: %c\n", 'A');
	printf("printf: %c\n", 'A');
	ft_printf("ft_printf: %c\n", 'B');
	printf("printf: %c\n", 'B');
	//test cases for specifer %s edge cases
	ft_printf("ft_printf: %s\n", "Hello, World!");
	printf("printf: %s\n", "Hello, World!");
	ft_printf("ft_printf: %s\n", "");
	printf("printf: %s\n", "");
	//test cases for specifer %d edge cases
	ft_printf("ft_printf: %d\n", 42);
	printf("printf: %d\n", 42);
	ft_printf("ft_printf: %d\n", -42);
	printf("printf: %d\n", -42);
	ft_printf("ft_printf: %d\n", 0);
	printf("printf: %d\n", 0);
	ft_printf("ft_printf: %d\n", 2147483647);
	printf("printf: %d\n", 2147483647);
	ft_printf("ft_printf: %d\n", -2147483648);
	//printf("printf: %d\n", -2147483648);
	//test cases for specifer %i edge cases
	ft_printf("ft_printf: %i\n", 42);
	printf("printf: %i\n", 42);
	ft_printf("ft_printf: %i\n", -42);
	printf("printf: %i\n", -42);
	ft_printf("ft_printf: %i\n", 0);
	printf("printf: %i\n", 0);
	ft_printf("ft_printf: %i\n", 2147483647);
	printf("printf: %i\n", 2147483647);
	ft_printf("ft_printf: %i\n", -2147483648);
	//printf("printf: %i\n", -2147483648);
	//  test cases for specifer %u edge cases
	ft_printf("ft_printf: %u\n", 42);
	printf("printf: %u\n", 42);
	ft_printf("ft_printf: %u\n", 0);
	printf("printf: %u\n", 0);
	ft_printf("ft_printf: %u\n", 4294967295);
	//printf("printf: %u\n", 4294967295);
	ft_printf("ft_printf: %u\n", -1);
	printf("printf: %u\n", -1);
	//test cases for specifer %x edge cases
	ft_printf("ft_printf: %x\n", 42);
	printf("printf: %x\n", 42);
	ft_printf("ft_printf: %x\n", 0);
	printf("printf: %x\n", 0);
	ft_printf("ft_printf: %x\n", 4294967295);
	//printf("printf: %x\n", 4294967295);
	ft_printf("ft_printf: %x\n", -1);
	printf("printf: %x\n", -1);
	//test cases for specifer %X edge cases
	ft_printf("ft_printf: %X\n", 42);
	printf("printf: %X\n", 42);
	ft_printf("ft_printf: %X\n", 0);
	printf("printf: %X\n", 0);
	ft_printf("ft_printf: %X\n", 4294967295);
	//printf("printf: %X\n", 4294967295);
	ft_printf("ft_printf: %X\n", -1);
	printf("printf: %X\n", -1);
	//test cases for specifer %p edge cases
	//test cases for specifer %% edge cases
	ft_printf("ft_printf: %%\n");
	printf("printf: %%\n");
	//test cases for specifer %c with multiple arguments
	ft_printf("ft_printf: %c %c %c\n", 'A', 'B', 'C');
	printf("printf: %c %c %c\n", 'A', 'B', 'C');
	ft_printf("ft_printf: %c %c %c\n", 'X', 'Y', 'Z');
	printf("printf: %c %c %c\n", 'X', 'Y', 'Z');
	//test cases for specifer multiple arguments with different types
	ft_printf("ft_printf: %d %s %c\n", 42, "Hello", 'A');
	printf("printf: %d %s %c\n", 42, "Hello", 'A');
	ft_printf("ft_printf: %i %u %x\n", -42, 4294967295, 255);
	//	printf("printf: %i %u %x\n", -42, 4294967295, 255);*/
}
