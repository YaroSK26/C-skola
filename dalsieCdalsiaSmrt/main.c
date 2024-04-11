#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
			char text;
    
    printf("Chces pokracovat? (a/n)\n");
    text = getchar();
    
    printf("Stlacil si %c\n", text);
    
    if (text == 'a') {
        printf("Pokracujes\n");
    } else {
        printf("Konec programu\n");
    }

	
	
	float cislo1;
	float cislo2;
	const operacia;
	float vysledok; 
	
	printf("zadaj prve 1 realne cislo:");
	scanf("%f" , &cislo1);
	
	printf("zadaj druhe 2 realne cislo:");
	scanf("%f" , &cislo2);
	
	printf("zadaj operaciu 1) scitanie 2) odcitanie 3) nasobenie 4) delenie ");
	scanf("%d" , &operacia);
	
	switch(operacia){
		case 1: vysledok = cislo1 + cislo2; printf("%f", vysledok) ; break;
		case 2: vysledok = cislo1 - cislo2; printf("%f", vysledok) ; break;
		case 3: vysledok = cislo1 * cislo2; printf("%f", vysledok) ; break;
		case 4: vysledok = cislo1 / cislo2; printf("%f", vysledok) ; break;
		default: printf("nemas rozum ");
	}
	
	

float a = 2.14;
int b,c;
int x,y;
float cv,rv;

b= a;
c=(int)a;

printf("zadaj delenca");
scanf("%d",&x);
printf("zadaj delitela");
scanf("%d", &y);

cv = x/y;
rv= (float)x/y;


printf(" celociselne %d : %d = %0.f \n", x,y,cv);
printf(" racionalne  %d : %d = %2.f \n", x,y,rv);





	
	return 0;
}

