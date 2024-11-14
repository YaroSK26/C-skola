#include <stdio.h>
#include <stdlib.h>

void trojuholnik(char znak, int pocetRiadkov);

int main() {
    int pocetRiadkov;
    char znak;
    printf("Napis pocet riadkov: ");
    scanf("%d", &pocetRiadkov);
    printf("Zvol si znak: ");
    scanf(" %c", &znak);
    trojuholnik(znak, pocetRiadkov);
    return 0;
}

void trojuholnik(char znak, int pocetRiadkov) {
    int i, j, medzera;
    for (i = 1; i <= pocetRiadkov; i++) {
        for (medzera = 0; medzera < pocetRiadkov - i; medzera++) {
            printf(" ");
        }
        for (j = 0; j < (2 * i - 1); j++) {
            printf("%c", znak);
        }
        printf("\n");
    }
}