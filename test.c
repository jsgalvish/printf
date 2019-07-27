#include "holberton.h"
/**
* main - testing debugger
**/
void main(void)
{
	int a;

	printf("Testing NULL Value\n");
	a = _printf(NULL);
	if (a == 0)
		printf("The test value for NULL is Correct\n");
	else
		printf("The test value for NULL is incorrect\n");
}
