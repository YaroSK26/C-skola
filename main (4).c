#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* matica[5][5], random  od -5 do  5,vypis, B skupina:  zaporne, prvky vedlajsiej 3-i, sucet cisel v stplcov a ulozit do pola*/

int main(int argc, char *argv[]) {
	
	int pole[4][5];
	int i,j, zaporne = 0,cislo;
	
	
	srand(time(0));
	
	
	for(i=0; i<5; i++){
		for(j=0; j < 5; j++){
			  pole[i][j] =	rand()%10-5;
			  cislo =  pole[i][j] ;
			  if(cislo < 0){
			  	zaporne = zaporne + 1;
			  }
			  
  }
}
	
	
	//vypis 
	
	for(i=0; i<5; i++){
		for(j=0; j < 5; j++){
				printf("%d ", pole[i][j]);
	}
	printf("\n");
}
	printf("\n");
	
	printf("pocet zapornych: %d", zaporne );
	printf("\n");
	
	
	//prvky vedlajsiej diagonaly 
	
	printf("prvky vedlajsiej diagonaly: ");
	
	for(i=0; i<5; i++){
		printf("%d ", pole[i][4-i]);
}
printf("\n");


//sucet cisel v stlpci
int sum =0;
int pole2[5];

	for(i=0; i<5; i++){
		printf("stlpec %d: ", i+1);
		for(j=0; j < 5; j++){
				printf("%d ", pole[j][i]); 
				sum += pole[j][i];
				
	}
	printf("sucet stlpcu %d: %d \n", i+1, sum);
	pole2[i] = sum;
	
}

printf("vypis pola so suctami: ");
for(i=0; i<5; i++){
	printf("%d ", pole2[i]);
}




	
	return 0;
}