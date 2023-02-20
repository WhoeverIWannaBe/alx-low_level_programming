#include<stdio.h>
int main(void)
{
	float floatType;
	char c;
	long l;
	short s;
	int i;
	long long int lli;

	printf("Size of char: %zu byte(s) \n", sizeof(c));
	printf("Size of a long: %zu byte(s) \n", sizeof(l));
	prinf("Size of an int: %zu byte(s) \n", sizeof(i));
	printf("Size of a short: %zu byt(s) \n", sizeof(s));
	printf("Size of a long long int: %zu byte(s) \n", sizeof(lli));
	printf("Size of float: %zu byte(s) \n", sizeof(floatType));

	return (0);
}
