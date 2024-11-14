#include <stdio.h>
#include <stdlib.h>

/* subor txt , anahodne znaky , citaj subor znak po znaku kym neni znak q  Q = koniec , 0 = bola to 0 , 1 = bolo to 1 , testy */

int main(int argc, char *argv[]) {
    FILE *fr;
    char c;

    fr = fopen("znaky.txt", "r");

    if (fr == NULL) {
        printf("chyba pri otvoreni suboru\n");
        return 1;
    }

    do {
        c = getc(fr);

        if (c == '0') {
            printf("nasiel si 0 , aj ty si nula\n");
        } else if (c == '1') {
            printf("nasiel si 1 , jediniu jednotku mas z telesnej vychovy aj to si musel odpovedat z teorie\n");
        }

    } while (c != 'q' && c != 'Q');

    printf("narazil si na q , papa\n");

    if (fclose(fr) == EOF) {
        printf("zavrety file\n");
    }

    return 0;
}
