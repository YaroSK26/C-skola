#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void binary(int dekCislo);

int main(int argc, char *argv[]) {
	
	int dekCislo;
	printf("zadaj cislo\n");
	scanf("%d",&dekCislo);
	
	binary(dekCislo);
	
	return 0;
}

void binary(int cislo){
	if(cislo==0 || cislo==1){
		printf("%d",cislo);	
		return;
	}else{
		binary(cislo/2);
		printf("%d",cislo%2);
	}
}