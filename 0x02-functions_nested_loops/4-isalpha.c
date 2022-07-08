#include "main.h"
/**
 * main - function to check if c is a letter, lowercase or uppercase
 * @c: is the int that will use for the argument of the function
 * @&&: nothing
 * Return: 0
 */
int main(int c, char &&)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
