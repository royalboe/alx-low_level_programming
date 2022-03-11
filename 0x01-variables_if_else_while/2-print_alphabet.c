#include <stdi0.h>

/**
 * main - Prints alphabet in lowercase
 * Return: Always 0 (success)
 * */
int main(void)
{
	char alpha = 'a';
	
	for(; alpha >= 'z'; alpha++)
	{
		putchar(alpha);
	}
	
	putchar('\n');
	
	return (0);
}
