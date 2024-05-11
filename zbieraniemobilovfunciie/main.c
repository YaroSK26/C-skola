#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int hodnota;

pozdrav();

printf("zadaj kod");
scanf("%d", &hodnota);
znak(hodnota);


printf("obsah obdlznika: %d cm^2", obdlznik(10, 20));

return 0;
}

void pozdrav(void){
printf("dobry den \n");
}

void znak(char kod)
{
    printf("kod asci  %c \n", kod);
}

int obdlznik(int sirka, int vyska)
{
    int vysledok = sirka * vyska;
    return vysledok;
}

