#include <stdio.h>
#include <stdlib.h>

int main() {
	int pole[5], i, j, k, l;
	int sucet;
	int vyber;
	char opakovanie;
	do{
		printf("Zadaj cisla do pola.\n");
		
		for(i = 0; i < 5; i++){
			printf("Zadaj %d cislo: ", i + 1);
			scanf("%d", &pole[i]);
		}
		printf("\nVypis pola: ");
		for(j = 0; j < 5; j++){
			printf("%d ", pole[j]);
		}
	
		printf("\nPonuka:");
		printf("\npre max z pola zadaj: m, M");
		printf("\npre min z pola zadaj: n, N");
		printf("\npre sucet prvkov pola zadaj: s, S");
		printf("\npre priemernu hodnotu prvkov pola zadaj: a, A");
	
		printf("\nTvoja volba:");
		getchar();
		vyber = getchar();
	
		int max = pole[0];
		int min = pole[0];
	
		switch(vyber){
			case 'm':
			case 'M':	
				for(i = 1; i < 5; i++){
					if(max < pole[i]){
					max = pole[i];
					}
				}
	
				printf("\nmax = %d", max);
				break;
			
			case 'n':
			case 'N':
				for(i = 1; i < 5; i++){
					if(min > pole[i]){
					min = pole[i];
					}
				}
	
				printf("\nmin = %d", min);
				break;
			
			case 's':
			case 'S':
				for(k = 0; k < 5; k++){
					sucet += pole[k];
				}
				printf("\nSucet prvkov v poli je: %d", sucet);
				break;
			
			case 'a':
			case 'A':
				for(l = 0; l < 5; l++){
					sucet += pole[l];
				}
				printf("\nPriemer prvkov v poli je: %.2f", (float)sucet / 5);
				break;
		
		}
		
		printf("\nChces pokracovat? [y, y || n, N: ]: ");
		
		if(opakovanie != 'y' || opakovanie != 'Y' || opakovanie != 'n' || opakovanie != 'N'){
			do{
				printf("\nNespravna volba. Skus este raz [y, y || n, N: ]: ");
				getchar();
				opakovanie = getchar();
			}while(opakovanie != 'y' || opakovanie != 'Y' || opakovanie != 'n' || opakovanie != 'N');
			
		}
		
	}while(opakovanie == 'y' || opakovanie == 'Y');
		
	/*printf("Zadaj cisla do pola.\n");
		
	for(i = 0; i < 5; i++){
		printf("Zadaj %d cislo: ", i + 1);
		scanf("%d", &pole[i]);
	}
	printf("\nVypis pola: ");
	for(j = 0; j < 5; j++){
		printf("%d ", pole[j]);
	}
	
	printf("\nPonuka:");
	printf("\npre max z pola zadaj: m, M");
	printf("\npre min z pola zadaj: n, N");
	printf("\npre sucet prvkov pola zadaj: s, S");
	printf("\npre priemernu hodnotu prvkov pola zadaj: a, A");
	
	printf("\nTvoja volba:");
	getchar();
	vyber = getchar();
	
	int max = pole[0];
	int min = pole[0];
	
	switch(vyber){
		case 'm':
		case 'M':	
			for(i = 1; i < 5; i++){
				if(max < pole[i]){
					max = pole[i];
				}
			}
	
			printf("\nmax = %d", max);
			break;
			
		case 'n':
		case 'N':
			for(i = 1; i < 5; i++){
				if(min > pole[i]){
					min = pole[i];
				}
			}
	
			printf("\nmin = %d", min);
			break;
			
		case 's':
		case 'S':
			for(k = 0; k < 5; k++){
				sucet += pole[k];
			}
			printf("\nSucet prvkov v poli je: %d", sucet);
			break;
			
		case 'a':
		case 'A':
			for(l = 0; l < 5; l++){
				sucet += pole[l];
			}
			printf("\nPriemer prvkov v poli je: %.2f", (float)sucet / 5);
			break;
		
	}*/
	
	return 0;
}
