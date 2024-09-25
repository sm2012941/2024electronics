#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char c_1;
	
	printf("enter a character: ");
	scanf("%c", &c_1);
	
	char c_2 = c_1 + 1;
	
	printf("the next character of %c (%i) is %c (%i)\n", c_1, c_1, c_2, c_2);

	return 0;
}
