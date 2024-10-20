#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%i", &num);
	int sum =0;
	int i = 1;
	for (i; i<=num; i++)
		sum = sum +i;
	printf("The result is %i", sum);
}
