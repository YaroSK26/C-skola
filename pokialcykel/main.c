#include <stdio.h>
#include <stdlib.h>

/* vytvor program -scita cele cisla -uzivatelom z klavesnice,ukonci stlacenim 0 . program vypise pct , sucet a priemer zadanych cisel   */

int main(int argc, char *argv[]) {
	
	int pocet = 0;
	int sum = 0;
	int cislo;
	
	printf("zadaj cisla, pre ukoncenie 0: ");
	scanf("%d" ,&cislo);
	
	while(cislo != 0) {
		sum += cislo;
		pocet++;
		
		scanf("%d" ,&cislo);
	}
	
	if(sum != NULL || pocet != NULL){
		printf("sucet cisel je %d: \n", sum);
		printf("pocet cisel je %d: \n",pocet);
		printf("priemer cisel je: %.2f \n", (float)sum/pocet);
	} else {
		printf("nezadal si ziadne cislo");
		
	}
	
	
	
	/*vypis cisla bez for cyklu od 1 po 8 */
	int i =1;
	
	printf("\n");
	
	while( i <=8){
	  printf("%d ",i);
	  i++;
	}
	

	return 0;
}
