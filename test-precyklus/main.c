#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*int vyska, sirka, i,j;
	char znak;
	
	printf("zadaj znak ");
	scanf("%c", &znak);
	
	printf("zadaj vyska stvorca ");
	scanf("%d", &vyska);
	
		printf("zadaj sirku stvorca ");
	scanf("%d", &sirka);
	

	
	for (j=1;j <= vyska;j++){
		for (i=1; i <= sirka ; i++){
			if(j == 1 || j == vyska){
				printf("%c", znak);
			}
			else {
			  if(i == 1 || i == sirka){
			 	printf("%c", znak);
			  }
			  else {
				printf(" ");
		      }	
			}	
		}
		printf("\n");
	}*/
	
	
	int i, delitelne7, cislo;
	
	srand(time(0));
	
	for(i =1; i <= 1; i++){
		cislo = rand()%100-50;
		printf("%d", cislo);
		
		if( cislo %7 == 0 ){
			delitelne7++;
		}
		printf("pocet cisel delitelnych siedmimi : %d", delitelne7);
	}

	
	return 0;
}
