#include <stdio.h>
#include <stdlib.h>

/* :) */
void nsd(int cislo1, int cislo2);

int main(int argc, char *argv[]) {
int cislo1, cislo2;
printf("zadaj 1. cislo: ");
scanf("%d", &cislo1);

printf("zadaj 2. cislo: ");
scanf("%d", &cislo2);


nsd(cislo1,cislo2);

return 0;
}

void nsd(int cislo1, int cislo2){
if(cislo1 == cislo2){
printf("nsd je %d", cislo1);

} else if ( cislo1 > cislo2 ){
nsd(cislo1-cislo2,cislo2);
} else {
nsd(cislo1,cislo2-cislo1);
}
}