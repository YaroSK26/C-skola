#include <stdio.h>
#include <stdlib.h>
//deklaracie funkcii
void vysklonuj_dukat(int dukat, char vysledok[]);
int rozdel_lup(int dukaty, int clenovia);
int dukaty_pre_anicku(int dukaty, int clenovia);
int pocet_ninjov(int N, int D);

int main() {
//deklaracie premenych
    int dukaty, clenovia,ninja,den,dukaty_pre_clenov,dukaty_anicka,celkovy_pocet_ninjov;
	char vysledok[9]; ;
	 

//otvaranie suboru
    FILE *fr = fopen("vstup.txt", "r");
    if (fr == NULL) {
        printf("Nepodarilo sa otvorit subor.\n");
        return 1;
    }
//skenovanie zo suboru
    fscanf(fr, "%d %d", &dukaty, &clenovia);
    fscanf(fr, "%d %d", &ninja, &den);
    
//zatvaranie suboru    
    fclose(fr);
    if (fclose(fr) != EOF){
    	printf("zle sa zatvoril subor");
	}
	
//vypocty dukatov
    dukaty_pre_clenov = rozdel_lup(dukaty, clenovia);
    dukaty_anicka = dukaty_pre_anicku(dukaty, clenovia);

//vysklonovanie slova dukat 
    vysklonuj_dukat(dukaty_pre_clenov, vysledok);
    vysklonuj_dukat(dukaty_anicka, vysledok);

//vypis
    printf("Pre Anicku %d %s\n", dukaty_anicka, vysledok);
    printf("%d clenov druziny po %d %s\n", clenovia, dukaty_pre_clenov, vysledok);

//ninjovia
    printf("Prvy den bolo %d ninjov\n", ninja);

    celkovy_pocet_ninjov = pocet_ninjov(ninja, den);
    printf("Celkovy pocet ninjov bolo %d\n", celkovy_pocet_ninjov);
   

    return 0;
}

//funkcie :)
void vysklonuj_dukat(int dukat, char vysledok[]) {
    if (dukat == 1) {
        vysledok[0] = 'd'; vysledok[1] = 'u'; vysledok[2] = 'k'; vysledok[3] = 'a'; vysledok[4] = 't'; vysledok[5] = '\n';
    } else if (dukat >= 2 && dukat <= 4) {
        vysledok[0] = 'd'; vysledok[1] = 'u'; vysledok[2] = 'k'; vysledok[3] = 'a'; vysledok[4] = 't'; vysledok[5] = 'y'; vysledok[6] = '\n';
    } else {
        vysledok[0] = 'd'; vysledok[1] = 'u'; vysledok[2] = 'k'; vysledok[3] = 'a'; vysledok[4] = 't'; vysledok[5] = 'o'; vysledok[6] = 'v'; vysledok[7] = '\n';
    }
}

int rozdel_lup(int dukaty, int clenovia) {
    return dukaty / (clenovia + 1);
}

int dukaty_pre_anicku(int dukaty, int clenovia) {
    return dukaty % (clenovia + 1);
}

int pocet_ninjov(int ninja, int den) {
    return (den * ninja) + (den * (den - 1)) / 2;
}