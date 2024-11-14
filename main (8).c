#include <stdio.h>

void ciselka(int cislo);

int main(int argc, char *argv[]) {
    int cislo = 0;
    
    printf("zadaj cislo: ");
    scanf("%d", &cislo);
    
    printf("Dvojkova reprezentacia: ");
    ciselka(cislo);
    printf("\n");

    return 0;
}

void ciselka(int cislo) {
    if (cislo == 0) {
        return; 
    }

    ciselka(cislo / 2); 

    printf("%d", cislo % 2); 
}
