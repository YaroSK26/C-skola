#include <stdio.h>
#include <stdlib.h>

/* do while  */

int main(int argc, char *argv[]) {

int pocet = 0 ;
float sucet = 0.0,cislo;


do {
printf("napis realne cislo");
scanf("%f", &cislo);
sucet += cislo;
pocet++;
} while ( cislo != 0);

printf("aritmeticky priemer je : %.2f ", sucet /pocet);
return 0;
}

