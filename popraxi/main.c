#include <stdio.h>
#include <stdlib.h>

// Deklarácie funkcií
void nacitajMaticu(int mat[10][10], int n, int m);
void vypisMaticu(int mat[10][10], int n, int m);
void vypisDiagonaly(int mat[10][10], int n, int m);
int sucetPrvkov(int mat[10][10], int n, int m);
void vypisPrvyRiadok(int mat[10][10], int m);
void vypisPrvyStlpec(int mat[10][10], int n);

int main() {
    int n, m;
    int mat[10][10]; 

    // Naèítanie rozmerov matice
    printf("Zadajte poèet riadkov a ståpcov matice -  max 10: ");
    scanf("%d %d", &n, &m);

    // Naèítanie matice
    nacitajMaticu(mat, n, m);

    // Výpis matice
    vypisMaticu(mat, n, m);

    // Výpis hlavnej a ved¾ajšej diagonály
    vypisDiagonaly(mat, n, m);

    // Výpoèet a výpis súètu prvkov matice
    int sum = sucetPrvkov(mat, n, m);
    printf("Súèet prvkov v matici: %d\n", sum);

    // Výpis prvého riadku
    vypisPrvyRiadok(mat, m);

    // Výpis prvého ståpca
    vypisPrvyStlpec(mat, n);

    return 0;
}

// Funkcia na naèítanie matice
void nacitajMaticu(int mat[10][10], int n, int m) {
    printf("Zadajte prvky matice:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

// Funkcia na výpis matice
void vypisMaticu(int mat[10][10], int n, int m) {
    printf("Matica:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

// Funkcia na výpis hlavnej a ved¾ajšej diagonály
void vypisDiagonaly(int mat[10][10], int n, int m) {
    printf("Hlavná diagonála: ");
    for (int i = 0; i < n && i < m; i++) {
        printf("%d ", mat[i][i]);
    }
    printf("\n");

    printf("Ved¾ajšia diagonála: ");
    for (int i = 0; i < n && i < m; i++) {
        printf("%d ", mat[i][m - i - 1]);
    }
    printf("\n");
}

// Funkcia na výpoèet a výpis súètu prvkov matice
int sucetPrvkov(int mat[10][10], int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += mat[i][j];
        }
    }
    return sum;
}

// Funkcia na výpis prvého riadku matice
void vypisPrvyRiadok(int mat[10][10], int m) {
    printf("Prvý riadok: ");
    for (int j = 0; j < m; j++) {
        printf("%d ", mat[0][j]);
    }
    printf("\n");
}

// Funkcia na výpis prvého ståpca matice
void vypisPrvyStlpec(int mat[10][10], int n) {
    printf("Prvý ståpec: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mat[i][0]);
    }
    printf("\n");
}

