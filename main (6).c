#include <stdio.h>
#include <stdlib.h>

/* 10 z klavesnice a zapise do znaky. txt*/

int main(int argc, char *argv[]) {
	
	FILE *fw;
	int i,n;
	
	fw = fopen("znaky.txt", "w");
	
	printf("zadaj pocet prvkov");
	scanf("%d",&n);
	
	int pole[n];
	
	
	printf("napis hodnoty: ");
	
	for(i =0; i< n; i++ ){
		scanf("%d", &pole[i] );
	}
	
	for(i =0; i< n; i++ ){
		fprintf(fw,"%d ", pole[i] );
	}
	
	
	if (fw == NULL) {
		printf("nic nejde zase");
	} else {
		printf("vsetko fahci");
	}
	
	
	
	return 0;
} 