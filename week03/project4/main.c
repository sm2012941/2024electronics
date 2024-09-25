#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int a;
	int b;
	
	printf("enter two integers: ");
	scanf("%i,%i", &a, &b);
	
	printf("%f / %f = %f\n", (float)a, (float)b, (float)a/b);

	return 0;
}
