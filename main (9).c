#include <stdio.h>
#include <stdlib.h>

/*  */
int faktorial(int n);

int main(int argc, char *argv[]) {
	
	int cislo;
	
	printf("zadaj cislo ");
	scanf("%d", &cislo);
	
	printf("faktorial cisla %d je cislo %d \n" ,cislo , faktorial(cislo));
	
		
	return 0;
}

int faktorial(int n){
	if(n == 0 || n == 1) {
		return 1;
	}else{
		return  n*	faktorial(n-1);
	}

}