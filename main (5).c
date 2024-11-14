#include <stdio.h>
#include <stdlib.h>

/* prečita 3 cisla zo suboru cisla.txt a ich sucet zapise do suboru vysledok.txt */

int main(int argc, char *argv[]) {
	
	FILE *fr;
	FILE *fw;
	int i;
	int c1,c2,c3;
	int sum = 0;
	
	fr = fopen("cisla.txt", "r");
	fw = fopen("vysledok.txt", "w");
	
	if(fr == NULL){
		printf("chyba bratu");
	} else {
		printf("vsetko fachci ");
	}
	if(fw == NULL){
		printf("chyba bratu");
	} 
	
	fscanf(fr,"%d %d %d", &c1, &c2, &c3);
	sum = c1 +c2+c3 ;


    fprintf(fw, "%d \n" , sum);
    
    fclose(fr);
    fclose(fw);


	return 0;
}