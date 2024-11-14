#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* pismena.txt - par raidkov , male velke psimena, medzery ,  precitaj, obrazovka, velky.txt - male pismena  budu velke   */

int main(int argc, char *argv[]) {
    FILE *fr;
    FILE *fw;
    char c;
    int sum = 0;
    int sumBM= 0;

    fr = fopen("pismena.txt", "r");
    fw = fopen("velky.txt", "w");

    if (fr == NULL) {
        printf("chyba pri otvoreni suboru pismena.txt \n");
    }
    if (fw == NULL) {
        printf("chyba pri otvoreni suboru velky.txt \n");
    }
   

    while ((c = getc(fr)) != EOF) {
    printf("%c" , c);
   
        if (islower(c)) {
            c = toupper(c);
        }
        sum++;
        if (c !=  '\n' && c != ' ' ){
        sumBM++ ;
}
       
        putc(c, fw);
    }

    printf(" \nmalo by to isc \n");
   
   printf("\npocet znakov %d", sum);
   printf("\npocet znakov bez medzier %d", sumBM);

    if (fclose(fr) == EOF) {
        printf("chyba pri zatvarani suboru pismena.txt \n");
    }
    if (fclose(fw) == EOF) {
        printf("chyba pri zatvarani suboru velky.txt \n");
    }
   
   
   
    fclose(fr);
    fclose(fw);

    return 0;
}  
