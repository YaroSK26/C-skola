#include <stdio.h>
#include <stdlib.h>

/*  */

void nacitajPole(int velkost, int pole[]);
void vypisPole(int velkost, int pole[]);
int maxPola (int velkost, int pole[]);

int main(int argc, char *argv[]) {
/*long long rodneCislo;

printf("zadaj rodne cislo: ");
scanf("%lld", &rodneCislo);

rodneCisloFunction(rodneCislo);*/


int velkost;
printf("zadaj velkost");
scanf("%d", &velkost);

int array[velkost];


nacitajPole(velkost,array);
vypisPole(velkost,array);
printf("najvacsi prvok %d ", maxPola(velkost,array));

return 0;
}


/*void rodneCisloFunction(long long rodneCislo){
if (rodneCislo % 11 == 0 ){
printf("wowww nekalmess");
}
else{
printf(":(((((()))))) kalmess");
};
}*/


void nacitajPole(int velkost, int pole[]){
int i;
printf("nacitaj prvky pola: \n");
for(i=0;i<velkost; i++){
scanf("%d", &pole[i]);
}
}
void vypisPole(int velkost, int pole[]){
int i;

printf("vypis pola:");
for( i = 0; i < velkost; i++) {
printf("%d ", pole[i]);
}

}

int maxPola (int velkost, int pole[]){
int i, max = pole[0];
for (i=1;i<velkost; i++){
if(pole[i]> max){
max = pole[i];
}
}
return max;
}
