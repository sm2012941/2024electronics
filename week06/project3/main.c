#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num;
	char c;
	printf("Input a string: ");
	while ((c=getchar())!='\n')
		if (c>=48 && c<=57)
			num = num +1;
	printf("The result is %i", num);
}
