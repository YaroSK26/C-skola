#include <stdio.h>
#include <stdlib.h>

/* vstup.txt pocet cisel jednotlive cisla , vystup na monitor , sucet , najmensie , navjacisa */

int main(int argc, char *argv[]) {
    
    FILE  *fr;
    int i, pocet = 0, sum = 0;
    int pole[6];
    
    fr = fopen("vstup.txt", "r");
    if (fr == NULL) {
        printf("nic nejde zase");
    }
    
    fscanf(fr, "%d", &pocet);
    
    for (i = 0; i < pocet; i++) {
        fscanf(fr, "%d", &pole[i]);
        printf("%d ", pole[i]);
    }
    
    int min = pole[0];
    int max = pole[0];
    
    for (i = 0; i < pocet; i++) {
        if (min > pole[i]) {
            min = pole[i];
        }
        if (max < pole[i]) {
            max = pole[i];
        }
        sum = sum + pole[i];
    }
    
    printf("vsetko fahci \n");
    printf("min: %d max: %d sum: %d", min, max, sum);
    
    fclose(fr);
    return 0;
}
