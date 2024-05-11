#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    srand(time(NULL));

    int matica[5][5];
    int i, j, cisloRiadku;

    // Napln�n� matice n�hodn�mi hodnotami
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            matica[i][j] = rand() % 7 - 3;
        }
    }

    // V�pis matice
    printf("Matice:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%3d ", matica[i][j]);
        }
        printf("\n");
    }

    printf("Zadej ��slo ��dku a sloupce, kter� chce� vypsat (m�me 5 ��dk� a sloupc�): ");
    scanf("%d", &cisloRiadku);

    // V�pis hodnot zadan�ho ��dku
    printf("Hodnoty ��dku %d: ", cisloRiadku);
    for(j = 0; j < 5; j++) {
        printf("%d ", matica[cisloRiadku - 1][j]);
    }
    printf("\n");

    // V�pis hodnot zadan�ho sloupce
    printf("Hodnoty sloupce %d: ", cisloRiadku);
    for(i = 0; i < 5; i++) {
        printf("%d ", matica[i][cisloRiadku - 1]);
    }
    printf("\n");

    // V�pis diagon�ly zleva nahoru
    printf("Hodnoty diagon�ly zleva nahoru: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", matica[i][i]);
    }
    printf("\n");

    // V�pis diagon�ly zprava dol�
    printf("Hodnoty diagon�ly zprava dol�: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", matica[i][4 - i]);
    }
    printf("\n");

    // S��t�n� hodnot v zadan�m ��dku
    int sumaRiadku = 0;
    for(j = 0; j < 5; j++) {
        sumaRiadku += matica[cisloRiadku - 1][j];
    }
    printf("Sou�et hodnot v ��dku %d: %d\n", cisloRiadku, sumaRiadku);

    // Ode��t�n� hodnot ve zvolen�m sloupci
    int rozdilSloupce = 0;
    for(i = 0; i < 5; i++) {
        rozdilSloupce -= matica[i][cisloRiadku - 1];
    }
    printf("Rozd�l hodnot ve sloupci %d: %d\n", cisloRiadku, rozdilSloupce);

    return 0;
}

