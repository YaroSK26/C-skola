#include <stdio.h>
#include <stdlib.h>

// Deklar�cie funkci�
void nacitajMaticu(int mat[10][10], int n, int m);
void vypisMaticu(int mat[10][10], int n, int m);
void vypisDiagonaly(int mat[10][10], int n, int m);
int sucetPrvkov(int mat[10][10], int n, int m);
void vypisPrvyRiadok(int mat[10][10], int m);
void vypisPrvyStlpec(int mat[10][10], int n);

int main() {
    int n, m;
    int mat[10][10]; 

    // Na��tanie rozmerov matice
    printf("Zadajte po�et riadkov a st�pcov matice -  max 10: ");
    scanf("%d %d", &n, &m);

    // Na��tanie matice
    nacitajMaticu(mat, n, m);

    // V�pis matice
    vypisMaticu(mat, n, m);

    // V�pis hlavnej a ved�aj�ej diagon�ly
    vypisDiagonaly(mat, n, m);

    // V�po�et a v�pis s��tu prvkov matice
    int sum = sucetPrvkov(mat, n, m);
    printf("S��et prvkov v matici: %d\n", sum);

    // V�pis prv�ho riadku
    vypisPrvyRiadok(mat, m);

    // V�pis prv�ho st�pca
    vypisPrvyStlpec(mat, n);

    return 0;
}

// Funkcia na na��tanie matice
void nacitajMaticu(int mat[10][10], int n, int m) {
    printf("Zadajte prvky matice:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

// Funkcia na v�pis matice
void vypisMaticu(int mat[10][10], int n, int m) {
    printf("Matica:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

// Funkcia na v�pis hlavnej a ved�aj�ej diagon�ly
void vypisDiagonaly(int mat[10][10], int n, int m) {
    printf("Hlavn� diagon�la: ");
    for (int i = 0; i < n && i < m; i++) {
        printf("%d ", mat[i][i]);
    }
    printf("\n");

    printf("Ved�aj�ia diagon�la: ");
    for (int i = 0; i < n && i < m; i++) {
        printf("%d ", mat[i][m - i - 1]);
    }
    printf("\n");
}

// Funkcia na v�po�et a v�pis s��tu prvkov matice
int sucetPrvkov(int mat[10][10], int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += mat[i][j];
        }
    }
    return sum;
}

// Funkcia na v�pis prv�ho riadku matice
void vypisPrvyRiadok(int mat[10][10], int m) {
    printf("Prv� riadok: ");
    for (int j = 0; j < m; j++) {
        printf("%d ", mat[0][j]);
    }
    printf("\n");
}

// Funkcia na v�pis prv�ho st�pca matice
void vypisPrvyStlpec(int mat[10][10], int n) {
    printf("Prv� st�pec: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mat[i][0]);
    }
    printf("\n");
}

