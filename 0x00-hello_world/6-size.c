#include<stdio.h>
int main(void)
{
	float floatType;
	char charType;
	long longType;
	short shortType;
	long long int longlongintType;

	printf("Size of char: %zu byte(s) \n", sizeof(charType));
	printf("Size of a long: %zu byte(s) \n", sizeof(longType));
	prinf("Size of an int: %zu byte(s) \n", sizeof(int));
	printf("Size of a short: %zu byt(s) \n", sizeof(shotType));
	printf("Size of a long long int: %zu byte(s) \n", sizeof(longlongintType));
	printf("Size of float: %zu byte(s) \n", sizeof(floatType));

	return (0);
}
