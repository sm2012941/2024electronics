#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int answer = 50;
	int num;
	int trials = 0;
	
	do{
		printf("Guess a number: ");
		scanf("%i", &num);
		trials = trials +1;
		if (num>answer)
			printf("High!\n");
		if (num<answer)
			printf("Low!\n");
	}while (num != answer);
	
	printf("Congratualtion! Trials: %i", trials);
	
}
