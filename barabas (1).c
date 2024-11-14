#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void otvorSubory(FILE **fw, FILE **fw2);
void generujCisla(FILE *fw, int *sum, int *pocet, float *priemer,
                  int *pocetPriemerVacsich, int *pocetPriemerMensich,
                  int zistiCislo, int *zistiCisloPocet, int *pozicia);
void vypisVysledky(FILE *fw2, int sum, int pocet, float priemer,
                   int pocetPriemerVacsich, int pocetPriemerMensich,
                   int zistiCisloPocet, int pozicia);
void zatvorSubory(FILE *fw, FILE *fw2);
void pocitajRiadkyMedzery(const char *filename, int *riadky, int *medzery);

int main() {
    srand(time(NULL));
    FILE *fw = NULL;
    FILE *fw2 = NULL;
    int sum = 0, pocet = 0;
    float priemer = 0.0f;
    int pocetPriemerVacsich = 0, pocetPriemerMensich = 0;
    int zistiCislo, zistiCisloPocet = 0, pozicia = 0;

    printf("Zadaj cislo na zistenie jeho v�skytu v s�bore: ");
    scanf("%d", &zistiCislo);

    otvorSubory(&fw, &fw2);
    generujCisla(fw, &sum, &pocet, &priemer, &pocetPriemerVacsich,
                 &pocetPriemerMensich, zistiCislo, &zistiCisloPocet, &pozicia);
    vypisVysledky(fw2, sum, pocet, priemer, pocetPriemerVacsich,
                  pocetPriemerMensich, zistiCisloPocet, pozicia);
    zatvorSubory(fw, fw2);

    int riadky = 0, medzery = 0;
    pocitajRiadkyMedzery("nahodne.txt", &riadky, &medzery);
    printf("Po�et riadkov: %d\nPo�et medzier: %d\n", riadky, medzery);

    return 0;
}

void otvorSubory(FILE **fw, FILE **fw2) {
    *fw = fopen("nahodne.txt", "w");
    *fw2 = fopen("vysledky.txt", "w");
    
    if (*fw == NULL || *fw2 == NULL) {
        printf("Chyba pri otv�ran� s�borov\n");
        exit(1);
    } else {
        printf("S�bory sa otvorili �spe�ne\n");
    }
}

void generujCisla(FILE *fw, int *sum, int *pocet, float *priemer,
                  int *pocetPriemerVacsich, int *pocetPriemerMensich,
                  int zistiCislo, int *zistiCisloPocet, int *pozicia) {
    int cislo = 0;
    *sum = 0;
    *pocet = 0;

    while (cislo != 100) {
        cislo = rand() % 101;
        (*pocet)++;
        *sum += cislo;
        *priemer = (float)(*sum) / *pocet;

        fprintf(fw, "%d\n", cislo);
        if (cislo > *priemer) {
            (*pocetPriemerVacsich)++;
        } else {
            (*pocetPriemerMensich)++;
        }
        if (cislo == zistiCislo) {
            (*zistiCisloPocet)++;
            *pozicia = *pocet;
        }
    }
}

void vypisVysledky(FILE *fw2, int sum, int pocet, float priemer,
                   int pocetPriemerVacsich, int pocetPriemerMensich,
                   int zistiCisloPocet, int pozicia) {
    fprintf(fw2, "Po�et ��sel: %d\n", pocet);
    fprintf(fw2, "S��et: %d\n", sum);
    fprintf(fw2, "Priemer: %.2f\n", priemer);
    fprintf(fw2, "Po�et v���ch ako priemer: %d\n", pocetPriemerVacsich);
    fprintf(fw2, "Po�et men��ch alebo rovnak�ch ako priemer: %d\n", pocetPriemerMensich);
    fprintf(fw2, "V�skyt ��sla: %d, poz�cia: %d\n", zistiCisloPocet, pozicia);
}

void zatvorSubory(FILE *fw, FILE *fw2) {
    if (fclose(fw) == EOF || fclose(fw2) == EOF) {
        printf("Chyba pri zatv�ran� s�borov\n");
    }
}

void pocitajRiadkyMedzery(const char *filename, int *riadky, int *medzery) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Chyba pri otv�ran� s�boru na ��tanie\n");
        return;
    }

    *riadky = 0;
    *medzery = 0;
    char c;
    while ((c = fgetc(file)) != EOF) {
        if (c == '\n') {
            (*riadky)++;
        } else if (c == ' ') {
            (*medzery)++;
        }
    }
    fclose(file);
}
