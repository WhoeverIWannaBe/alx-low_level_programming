#include<stdio.h>
int main(void)
{
	float f;
	int i;
	char c;
	long int li;
	long long int lli;

	printf("Size of a float: %zu byte(s)\n", sizeof(f));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long: %zu byte(s)\n", sizeof(l));
	printf("Size of a long int: %zu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(lli));

	return (0);
}
