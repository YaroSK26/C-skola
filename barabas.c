#include <stdio.h>
#include <stdlib.h>

/* B skupina - uloha na rekurzivnu funkciu v programe C - vypocet n-teho clena postupnosti,
   ktora je dana: a1 = 2, a2 = 3, an = an-2 - 2 * an-1. 
   V hlavnom programe vyziadaj poradovy clen postupnosti a nasledne vypis jeho hodnotu. */

int rekurzivna_funkcia(int a, int b, int n);

int main(int argc, char *argv[]) {
    int a = 2;  // a1
    int b = 3;  // a2
    int n; 
    
    printf("Zadaj poradove cislo clena postupnosti: ");
    scanf("%d", &n);
    
    if (n == 1) {
        printf("a1 = %d\n", a);
    } else if (n == 2) {
        printf("a2 = %d\n", b);
    } else {
        int vysledok = rekurzivna_funkcia(a, b, n);
        printf("Clen a%d = %d\n", n, vysledok);
    }
    
    return 0;
}

int rekurzivna_funkcia(int a, int b, int n) {

    if (n == 1) {
        return a;
    }
    if (n == 2) {
        return b;
    }

    int dalsia_value = a - 2 * b;
    
    return rekurzivna_funkcia(b, dalsia_value, n - 1);
}
