#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	
	int pole[20] , i, j, temp;
	float priemer,sucet = 0.0;
	srand(time(0));
	
	for(i=0;i<20; i++){
		pole[i] = rand()%101;
		printf("%d ", pole[i]);
		sucet = sucet + pole[i];
	}
	
	int min = pole[0], max = pole[0];
	for(i=0; i<20; i++){
		if( max < pole[i]){
			max = pole[i];
		}
		if(min > pole[i]){
			min = pole[i];
		}
	}
	printf("\n");
	printf("min: %d max: %d", min, max);
	printf("\n");
	
	//priemer
	
	priemer = sucet / 20.0;
	printf("priemer: %.2f", priemer);
	printf("\n");
	
	for(i=0; i<20; i++){
		if(priemer < pole[i]){
			printf("%d [%d] ", pole[i], i );
		}
	}
	printf("\n");
	
	//sorting
	for(i=0; i<19; i++){
		for(j=0; j<19-i; j++){
			if(pole[j] > pole[j+1]){
				temp = pole[j];
				pole[j] = pole[j+1];
				pole[j+1] = temp;
			}
		}
	}
	
	//print sorted array
	for(i=0; i<20; i++){
		printf("%d ", pole[i]);
	}
	
	return 0;
}