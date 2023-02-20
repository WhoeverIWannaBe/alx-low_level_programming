#include<stdio.h>
int main(void)
{
	float floatType;

	sizeof(char);
	sizeof(long);
	sizeof(int);
	sizeof(short);
	sizeof(unsigned char);
	sizeof(unsigned short);
	sizeof(unsigned int);
	sizeof(unsigned long);
	sizeof(long long int);
	printf("Size of float: %zu byte(s) \n", sizeof(floatType));

	return (0);
}
