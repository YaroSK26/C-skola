#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void two (int *p);

int main(int argc, char *argv[]) {
	
	int a=7;
	int *pa = &a;
	two(pa);
	printf("a=%d",a);
	
	return 0;
}

void two (int *p)
{
	*p = 2;
}