#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 int cislo, sucetKladnych = 0, sucetZapornych = 0;

    printf("Zadajte cele cisla (0 pre ukoncenie): ");

    while (1) { 
        scanf("%d", &cislo);
        if (cislo == 0) {
            break;
	    }

        if (cislo > 0) {
            sucetKladnych += cislo; 
        } else {
            sucetZapornych += cislo; 	
        }
    }

    printf("Sucet kladnych cisel: %d\n", sucetKladnych);
    printf("Sucet zapornych cisel: %d\n", sucetZapornych);

    return 0;
}
