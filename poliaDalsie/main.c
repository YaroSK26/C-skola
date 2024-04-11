#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* */

int main() {
	srand(time(0));
	
	int maticaA[4][4];
	int maticaB[4][4];
	int maticaC[4][4];
	int maticaD[4][4];
	int cislo3 = 0;
	
	int riadok,stlpec;
	

	
	
	for(riadok=0;riadok<4;riadok++){
		for(stlpec=0;stlpec<4;stlpec++){
			printf("zadaj do %i stlpca %i riadku \n ",stlpec+1,riadok+1);
			scanf("%i",&maticaB[riadok][stlpec]);
		}
	printf("\n");
	}
	
	printf("\n \n \n ");
	
	for(riadok=0;riadok<4;riadok++){
		for(stlpec=0;stlpec<4;stlpec++){
			maticaA[riadok][stlpec] = rand()%5+1;
			printf("%3i",maticaA[riadok][stlpec]);
		}
	printf("\n");
	}
	
	printf("\n \n \n ");
	
	for(riadok=0;riadok<4;riadok++){
		for(stlpec=0;stlpec<4;stlpec++){
			printf("%3i",maticaB[riadok][stlpec]);
		}
	printf("\n");
	}
	
	printf("\n \n \n ");
	
	for(riadok=0;riadok<4;riadok++){
		for(stlpec=0;stlpec<4;stlpec++){
			maticaC[riadok][stlpec] = maticaA[riadok][stlpec] * 7;
			printf("%3i",maticaC[riadok][stlpec]);
		}
	printf("\n");
	}
	
	printf("\n \n \n ");
	
	for(riadok=0;riadok<4;riadok++){
		for(stlpec=0;stlpec<4;stlpec++){
			maticaD[riadok][stlpec] = maticaB[riadok][stlpec] - maticaA[riadok][stlpec];
			printf("%3i",maticaD[riadok][stlpec]);
		}
	printf("\n");
	}
	
	printf("\n \n \n ");
	
	for(riadok=0;riadok<4;riadok++){
		for(stlpec=0;stlpec<4;stlpec++){
			if(maticaA[riadok][stlpec]==3){
				cislo3 ++;
			}
		}
			
	}	
	
	printf("\n \n \n ");
	printf("V matici A sa cislo 3 nachadza %i",cislo3);
	
	
	return 0;
}
