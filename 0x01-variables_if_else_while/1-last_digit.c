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

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					printf("Last digit of 98 ");
					printf("is 8 ");
					if (n > 5)
					{
						printf("and is greater than 5\n");
					}
					printf("Last digit of 980 ");
					printf("is 0 ");
					if (n == 0)
					{
						printf("and is 0\n");
					}
					printf("Last digit of -98 ");
					printf("is -8 ");
					if (n < 6 && n != 0)
					{
						printf("and is less than 6 and not 0\n");
					}

					return (0);
}
