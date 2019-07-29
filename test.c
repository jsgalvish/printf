#include "holberton.h"
/**
* main - testing debugger
**/
void main(void)
{
	int a, len;

	printf("Testing NULL Value\n");
	a = _printf(NULL);
	if (a == 0)
		printf("The test value for NULL is Correct\n");
	else
		printf("The test value for NULL is incorrect\n");

	printf("\n");
	printf("Testing c Flag\n");
	_printf("Character with _print:[%c][%c][%c][%c]\n", 'H', 'o', 'l', 'b');
	printf("Character with print:[%c][%c][%c][%c]\n", 'H', 'o', 'l', 'b');

	printf("\n");
	printf("Testing s Flag\n");
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	printf("\n");
	printf("Testing count Flag\n");
	len = printf("count number %c.\n", 'c');
	printf("Length:[%d]\n", len);

	int alen, elen;
	alen = elen = 0;
	int p = 237482;
	int n = -328472;
	int z = 0;
	elen = printf("Expected here  : %i\n", n);
	alen = _printf("Actual  here   : %i\n", n);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	elen = printf("Expected   : %i\n", z);
	alen = _printf("Actual     : %i\n", z);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %i\n", INT_MAX);
	_printf("Actual     : %i\n", INT_MAX);
	printf("Expected   : %i\n", INT_MIN);
	_printf("Actual     : %i\n", INT_MIN);

}
