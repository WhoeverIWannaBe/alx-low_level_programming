#include<stdio.h>
int main(void)
{
	float f;
	char c;
	long l;
	short s;
	unsigned char uc;
	unsigned short us;
	unsigned int ui;
	int i;
	unsigned long ul;
	long long int lli;

	printf("Size of char:", sizeof(c), "byte(s)");
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
