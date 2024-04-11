#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*int i, cislo, delitelne7;
	
	srand(time(0));
	
	for(i=1; i<=10; i++)
	{
		cislo = rand()%100-50;
		printf("%d \n",cislo);
		if (cislo%7==0)
			delitelne7++;	
	}
	
	printf("pocet cisel del sedem: %d\n", delitelne7 );*/
	
/*	int i, cislo, sum;
	
	srand(time(0));
	
	for(i=1; i<=10; i++)
	{
		cislo = rand()%100-50;
		
		sum +=cislo; 
		printf("%d \n" , cislo);
	}
	printf("final cislo : %d \n",sum);	
*/
	
	/*int i,cislo;	
	int even_count = 0;
	
	srand(time(0));
	
	for(i=1; i<=10; i++)
	{
		cislo = rand()%100-50;
		printf("%d \n",cislo);
		if(cislo % 2 == 0 && cislo < 0 ) {
            even_count++; 
        }
       	
	}
	
	
	printf("\nPocet parnych zapornych  cisel: %d\n", even_count);*/
	
	/*int i,cislo;	
	int even_count = 0;
	
	srand(time(0));
	
	for(i=1; i<=10; i++)
	{
		cislo = rand()%100-50;
		printf("%d \n",cislo);
		if(cislo < 10 && cislo > -10 ) {
            even_count++; 
        }
       	
	}
	
	
	printf("\nPocet jednocifernych cisel: %d\n", even_count);*/
	
	
	int i, number, min = 50, max = -50;

    srand(time(0));

    for(i = 0; i < 10; i++) {
        number = rand() % 100 - 50;
        
        if(number < min) {
            min = number;
        }
        if(number > max) {
            max = number;
        }
    }

    printf("Najmensie cislo je: %d\n", min);
    printf("Najvacsie cislo je: %d\n", max);

 
	
	return 0;
}
