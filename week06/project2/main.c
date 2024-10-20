#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int n;
	printf("Enter the integer: ");
	scanf("%d", &n);
	
	if (n>=0)
		printf("%d",n);
	else
		printf("%d",-n);
}
