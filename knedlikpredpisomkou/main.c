#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
/*sprav mi kod v C , pre malu nasobilku  cez while / do while , stlacenim K sa skonci program  , po kazdom priklade  zisti
 ze ci je vysledok ktory uzivatel zadal spravny aelbo nespravny a
 teda vypise spravne / nespravne  , nakoniec vypise percentualnu uspesnost odpovedi , priklady cez random , cez kniznicu time.h*/
    srand(time(NULL)); 

    int spravne = 0;
    int pocetPok = 0;
    int koniec;

    do {
        int a = rand() % 10 + 1; 
        int b = rand() % 10 + 1; 
        int vysledok;
        printf("Kolko je %d * %d? ", a, b);
        scanf("%d", &vysledok);

        while(getchar() != '\n');

        if (vysledok == a * b) {
            printf("Spravne!\n");
            spravne++;
        } else {
            printf("Nespravne. Spravna odpoved je %d.\n", a*b);
        }

        pocetPok++;

        printf("Pre pokracovanie stlac lubovolnu klavesu, pre ukoncenie 'K'.\n");
        koniec = getchar(); 
        while(getchar() != '\n');
    } while(koniec != 'K' && koniec != 'k');

    printf("Percentualna uspesnost odpovedi: %.2f%%\n", ((float)spravne / pocetPok) * 100);

    return 0;
}

