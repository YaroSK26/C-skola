#include <stdio.h>
#include <stdlib.h>

/* nacita rozmery, matica z klavesnice, vypis, pct parnych, neparnych, sucet v stlpcov - do pola, vypis */

int main(int argc, char *argv[]) {
    int rozmer1, rozmer2;

    printf("zadaj pct riadkov matice: ");
    scanf("%d", &rozmer1);

    printf("zadaj pct stlpcov matice: ");
    scanf("%d", &rozmer2);

    int pole[rozmer1][rozmer2];
    int pole2[rozmer2];
    int i, j;
    int pocetParnych = 0, pocetNeparnych = 0;

    // Inicializacia pole2 na nuly
    for (j = 0; j < rozmer2; j++) {
        pole2[j] = 0;
    }

    // Nacitanie matice a vypocet parnych, neparnych cisel
    for (i = 0; i < rozmer1; i++) {
        printf("\n");
        for (j = 0; j < rozmer2; j++) {
            printf("zadaj hodnotu ");
            scanf("%d", &pole[i][j]);
            if (pole[i][j] % 2 == 0) {
                pocetParnych++;
            } else {
                pocetNeparnych++;
            }
            // Pridanie hodnoty do prislusneho stlpca v pole2
            pole2[j] += pole[i][j];
        }
    }

    // Vypis matice
    for (i = 0; i < rozmer1; i++) {
        printf("\n");
        for (j = 0; j < rozmer2; j++) {
            printf("%d ", pole[i][j]);
        }
    }

    // Vypis sucetov stlpcov
    printf("\nSucet v stlpcoch:\n");
    for (j = 0; j < rozmer2; j++) {
        printf("Stlpec %d: %d\n", j, pole2[j]);
    }

    printf("\n");
    printf("pocet parnych %d, pocet neparnych %d", pocetParnych, pocetNeparnych);

    return 0;
}
