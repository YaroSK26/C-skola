#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int smajlik1();
int smajlik2();

int main(int argc, char *argv[]) {
	
while(1){
	smajlik1();
	sleep(3);
	system("cls");
	smajlik2();
	sleep(3);
	system("cls");
}	

	
	return 0;
}

	smajlik1() {
		printf("\t*   *\n");
		printf("\t  *  \n");
		printf("\t*****\n");	
	};
	

	smajlik2(){
		printf("\t-   -\n");
		printf("\t  *  \n");
		printf("\t-----\n");	
		
	}