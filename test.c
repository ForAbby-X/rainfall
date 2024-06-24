#include <stdlib.h>
#include <stdio.h>

void p(void){char cmd[] = "cat ../rainfall/test.c";system(cmd);}

int main(void)
{
	p();
	return (0);
}


