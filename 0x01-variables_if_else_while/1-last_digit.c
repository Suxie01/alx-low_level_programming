#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- entry point
 *
 * Return: 0
 */
int main(void)
{
		int n;

		printf("Last digit of ");

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					printf("is  ");
					if (n > 5)
					{
						printf("and is greater than 5\n");
					}
					else if (n == 0)
					{
						printf("and is 0\n");
					}
					else if (n < 6 && n != 0)
					{
						printf("and is less than 6 and not 0\n");
					}

					return (0);
}
