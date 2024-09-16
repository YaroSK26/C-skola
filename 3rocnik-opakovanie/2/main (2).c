#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* naplni maticu , 3x4  nahodnymi cislami -100 do 100 , obdlznikovy tvar , vypis pocet zapornych cisel  */

int main(int argc, char *argv[]) {
	
	int pole[3][4];
	int i,j,cislo;
	int pocet = 0;
	
	srand(time(0));
	
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			cislo = rand()%202-100;
			pole[i][j] = cislo;
			if (cislo < 0 ){
		pocet = pocet +1;
	}
		}
	}
	
	printf("vypis: ");
	for(i=0; i<3; i++){
		printf("\n");
		for(j=0; j<4; j++){
			printf(" %d ", pole[i][j]);
		}
	}
	

	printf("\n");
	
	
	printf("pocet zapornych cisel: %d" , pocet);
	
	
	return 0;
}
