#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    srand(time(NULL));

    int matica[5][5];
    int i, j, cisloRiadku;

    // Naplnìní matice náhodnými hodnotami
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            matica[i][j] = rand() % 7 - 3;
        }
    }

    // Výpis matice
    printf("Matice:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%3d ", matica[i][j]);
        }
        printf("\n");
    }

    printf("Zadej èíslo øádku a sloupce, které chceš vypsat (máme 5 øádkù a sloupcù): ");
    scanf("%d", &cisloRiadku);

    // Výpis hodnot zadaného øádku
    printf("Hodnoty øádku %d: ", cisloRiadku);
    for(j = 0; j < 5; j++) {
        printf("%d ", matica[cisloRiadku - 1][j]);
    }
    printf("\n");

    // Výpis hodnot zadaného sloupce
    printf("Hodnoty sloupce %d: ", cisloRiadku);
    for(i = 0; i < 5; i++) {
        printf("%d ", matica[i][cisloRiadku - 1]);
    }
    printf("\n");

    // Výpis diagonály zleva nahoru
    printf("Hodnoty diagonály zleva nahoru: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", matica[i][i]);
    }
    printf("\n");

    // Výpis diagonály zprava dolù
    printf("Hodnoty diagonály zprava dolù: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", matica[i][4 - i]);
    }
    printf("\n");

    // Sèítání hodnot v zadaném øádku
    int sumaRiadku = 0;
    for(j = 0; j < 5; j++) {
        sumaRiadku += matica[cisloRiadku - 1][j];
    }
    printf("Souèet hodnot v øádku %d: %d\n", cisloRiadku, sumaRiadku);

    // Odeèítání hodnot ve zvoleném sloupci
    int rozdilSloupce = 0;
    for(i = 0; i < 5; i++) {
        rozdilSloupce -= matica[i][cisloRiadku - 1];
    }
    printf("Rozdíl hodnot ve sloupci %d: %d\n", cisloRiadku, rozdilSloupce);

    return 0;
}

