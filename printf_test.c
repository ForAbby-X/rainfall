#include <stdio.h>

int main()
{
	int D;

	printf("0123456789%n012345678\x089%n\n", &D, &D);

	printf("Value of D=%d\n", D);
}