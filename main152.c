#include <stdio.h>
#include <stdlib.h>

void funkce(int *p_1, int *p_2);

int main(int argc, char *argv[]) {
    int a = 8;
    printf("premenna a s hodnotou %d je ulozena na adrese %p\n", a, (void*)&a);

    int cislo1 = 1;
    int cislo2 = 2;

    printf("cislo1: %d , cislo2: %d\n", cislo1, cislo2);

    funkce(&cislo1, &cislo2);

    printf("cislo1: %d , cislo2: %d\n", cislo1, cislo2);

    return 0;
}

void funkce(int *p_1, int *p_2) {
    int pomocna;

    pomocna = *p_1;
   
    *p_1 = *p_2;
   
    *p_2 = pomocna;
   
   
}