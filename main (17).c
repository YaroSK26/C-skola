#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float sporenie(int cas, int istina);

int main(int argc, char *argv[]) {
	
	int istina;
	int cas;
	
	
	printf("zadaj pocet rokov sporenia ");
	scanf("%d",&cas);
	
	printf("zadaj istinu ");
	scanf("%d",&istina);
	
	printf("Po %d rokoch sporenia budete mat na ucte %.2f eur",cas,sporenie(cas, istina));
	
	return 0;
}

float sporenie(int cas, int istina){
	
	if(cas==1)
		return istina*1.05;
	else
		return (istina+sporenie(cas-1, istina))*1.05;
}