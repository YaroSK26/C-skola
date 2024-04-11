#include <stdio.h>
#include <stdlib.h>

/* vypis do riadku obsah pola , do dalseiho riadku obrateneho */

int main(int argc, char *argv[]) {

int cisla[] = {1,2,3,7};
int i,k;
float priemer;

int max = cisla[0];


for(i=0; i< 4; i++){

if (max < cisla[i] ) {
max = cisla[i];
}

priemer += cisla[i];

   printf("%d ", cisla[i]);
}

printf("priemer je %f ", priemer /4 );

printf("\n");

for(k=3; k >= 0; k--){

printf("%d ", cisla[k]);
}

printf("\n");
printf("max cislo je: %d" , max);

return 0;
}

