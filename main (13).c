#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mocnina(int n, int m);

int main(int argc, char *argv[]) {
    int n = 0, m = 0, i;
    
    
    printf("zadaj mocnenec: ");
    scanf("%d", &n);
    printf("zadaj mocnitel: ");
    scanf("%d", &m);
    
     mocnina(n,m);
   	
    
    return 0;
}

void mocnina(int n, int m){
	int sum = 0; 
	sum = pow(n,m);	
	printf("%d na %d je %d\n",n,m,sum); 
	if(m > 0 ){
		mocnina(n,m-1);
	}
}