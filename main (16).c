#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void snd(int cislo1, int cislo2);

int main(int argc, char *argv[]) {
	
	int cislo1;
	int cislo2;
	
	printf("zadaj cisla na SND\n");
	printf("cislo 1: ");
	scanf("%d",&cislo1);
	printf("cislo 2: ");
	scanf("%d",&cislo2);
	
	snd(cislo1, cislo2);
	
	return 0;
}


void snd(int cislo1, int cislo2){
	if(cislo1 == cislo2){
		printf("SND je %d",cislo1);
	}
	else if(cislo1<cislo2){
		snd(cislo1, cislo2-cislo1);
	}
	else{
		snd(cislo1-2, cislo2);
	}
	
}