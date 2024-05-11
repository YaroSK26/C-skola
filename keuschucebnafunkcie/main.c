#include <stdio.h>
#include <stdlib.h>

void kalkulacka();

int sucet(int x, int y);
int odcitanie(int x, int y);
int nasobenie(int x, int y);
float delenie(float x, float y);

int main() {
    kalkulacka();
    return 0;
}

void kalkulacka() {
    char znak;
    int cislo1, cislo2;

    printf("Kalkulacka\n");
    printf("+ ... scitanie\n");
    printf("- ... odcitanie\n");
    printf("* ... nasobenie\n");
    printf("/ ... delenie\n");
    printf("K ... koniec\n");

    do {
        printf("Zadaj operaciu alebo skonci program: ");
        scanf(" %c", &znak);

        if (znak == '+') {
            printf("Zadaj prve cislo: ");
            scanf("%d", &cislo1);
            printf("Zadaj druhe cislo: ");
            scanf("%d", &cislo2);
            printf("Vysledok: %d\n", sucet(cislo1, cislo2));
        } else if (znak == '-') {
            printf("Zadaj prve cislo: ");
            scanf("%d", &cislo1);
            printf("Zadaj druhe cislo: ");
            scanf("%d", &cislo2);
            printf("Vysledok: %d\n", odcitanie(cislo1, cislo2));
        } else if (znak == '*') {
            printf("Zadaj prve cislo: ");
            scanf("%d", &cislo1);
            printf("Zadaj druhe cislo: ");
            scanf("%d", &cislo2);
            printf("Vysledok: %d\n", nasobenie(cislo1, cislo2));
        } else if (znak == '/') {
       
       
            printf("Zadaj prve cislo: ");
            scanf("%d", &cislo1);
            printf("Zadaj druhe cislo: ");
            scanf("%d", &cislo2);
            if (cislo1 == 0  || cislo2 == 0){
            printf("neda sa delit nulou");
            return;
}
            printf("Vysledok: %f\n", delenie(cislo1, cislo2));
        }
    } while (znak != 'K' && znak != 'k');
}

int sucet(int x, int y) {
    return x + y;
}
int odcitanie(int x, int y) {
    return x - y;
}
int nasobenie(int x, int y) {
    return x * y;
}
float delenie(float x, float y) {
    return x / y;
}

