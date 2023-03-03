#include <stdio.h>
/**
 * main - demo program
 *
 *Return: 0 if successful else 1 on error
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your line of code here...
	 * - You are not allowed to code anything else than this line of code
	 */
	*(p + 5) = 98;
	/* ... so that this prints 98\n */
	/*
	 * - You are not allowed to modify the variable p
	 * - You can only write one statement
	 * - You are not allowed to use ,
	 */
	*(p + 5) = 98;
	/* ... so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
