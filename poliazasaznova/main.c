#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
float matej[10];
int i,pocet, pocetPodpriemernych=0;
float priemer,sucet =0;


printf("zadaj 10 realnych cisel");

//nacitanie hodnot

for(i=0; i<10; i++){
scanf("%f", &matej[i]);
}

for(i=0; i<10; i++){
sucet+= matej[i];
pocet++;
}

priemer = sucet/ pocet;
printf("\n Priemer cisel : %.2f", priemer);


for(i=0; i<10; i++){
if(matej[i] < priemer) {
pocetPodpriemernych++;
}
}
printf("\n pdpriemernych cisel : %d", pocetPodpriemernych);


return 0;
}       


/*
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
int loto[6];
int i,j;
int pom;

srand(time(0));

printf("boli vyzrebovane cisla ");

for (i=0; i<6; i++){
loto[i] = rand()%49+1;
printf("%d ", loto[i]);
}


//usporiadane vygerenrovanych cisel

printf("vyherne cisla:");

for(i=0;i<5; i++){
for (j=0; j<5-i; j++){
if(loto[j] > loto[j+1]){
pom = loto[j];
loto[j] = loto[j+1];
loto[j+1] = pom;
}
}
}

for(i=0;i<6; i++){
printf("%d ",loto[i]);
}
return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

 vstup = pocet ziakov, a nasledne ich vysky v cm ktore ulozi do pola , vysky vypise do riadku uspeoradnae ppo najvacsiu ,
 dalej vypise priemrnu vysku pct ziakov ktore maju podpriemernu a nadpriemernu  

int main(int argc, char *argv[]) {

int pocet,vysky,i,j,d;

printf("zadaj pocet ziakov: ");
scanf("%d", pocet);

int poleZiakov[pocet];

printf("zadaj ich vysky");
scanf("%d", vysky);

int poleVysky[vysky];

for(i=0; i < pocet; i++){
for (j= i+1; j < pocet; j++){
if(vysky[i] > vysky[j]){
float temp = vysky[i];
vysky[i] = vysky[j];
vysky[j] =  temp;
}
}
}

printf("vysky ziakov od najvacsej: ");
for ( d = 0 ; d< pocet; d++;){
printf(".2f cm \n" vysky[d]);
}

return 0;
}*/
