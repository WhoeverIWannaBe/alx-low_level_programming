#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
void main()
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) 
	{
		printf("%d is positive");
		else if (n = 0)
		{
			printf("is zero");
			else if (n < 0)
				{
					printf("%d is negative");
				}
		}
	}
	/* your code goes there */
	return (0);
}
