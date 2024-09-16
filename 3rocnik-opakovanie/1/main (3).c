#include <stdio.h>
#include <stdlib.h>

/* :(((((((((((((((((((((((((((((((((  klavesnica, 6 znamok , pole, vypis - jeden riadok , odelene ciarkou, primeer */

int main(int argc, char *argv[]) {
	
	int i;
	int pole[6];
	int sucet = 0;
	float priemer = 0;
	
	printf("zadaj znamky (6): ");
	
	for (i=0; i < 6 ;i++){
		scanf("%d", &pole[i]);
}
		
	printf("tvoje znamky:");
	for (i =0; i  < 6 ; i++){
		printf( i < 5 ? " %d," : " %d\n", pole[i]);
	};
	
	
	for (i = 0; i < 6 ; i++){
		sucet = sucet + pole[i];
	}
	
	priemer = sucet / 6.0;
	
	printf("priemer je %.2f" , priemer);
	
	
return 0;
}