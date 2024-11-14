#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a=1;
	char b = "A";
	double c = 5.12;
	
	int *pa = &a;
	char *pb = &b;
	double *pc = &c;
	
	printf("velkost typu int je %d B.\n",sizeof(a));
	printf("velkost typu char je %d B.\n",sizeof(b));
	printf("velkost typu double je %d B.\n\n",sizeof(c));
	
	printf("velkost smernika na int je %d B.\n",sizeof(pa));
	printf("velkost smernika na int je %d B.\n",sizeof(pb));
	printf("velkost smernika na char je %d B.\n\n",sizeof(pc));
	
	printf("velkost obsahu premennej smernika na int je %d B.\n",sizeof(*pa));
	printf("velkost obsahu premennej smernika na char je %d B.\n",sizeof(*pb));
	printf("velkost obsahu premennej smernika na double je %d B.\n\n",sizeof(*pc));
	
	printf("obsah smernika na int je %p.\n",&pa);
	printf("obsah premennej na ktoru ukazuje smernik pa je %d.\n\n",*pa);
	
	printf("obsah smernika na char je %p.\n",&pb);
	printf("obsah premennej na ktoru ukazuje smernik pa je %d.\n\n",*pb);
	
	printf("obsah smernika na double je %p.\n",&pc);
	printf("obsah premennej na ktoru ukazuje smernik pa je %d.\n\n",*pc);
	
	return 0;
}