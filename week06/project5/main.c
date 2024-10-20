#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num1, num2;
	char op;
	int result = 0;
	
	printf("Enter the calculation: ");
	scanf("%i %c %i", &num1, &op, &num2);
	
	if (op=='+')
		result = num1 + num2;
	else if (op == '-')
		result = num1 - num2;
	else if (op == '*')
		result = num1 * num2;
	else if (op == '/')
		result = num1 / num2;
	else if (op == '%')
		result = num1 % num2;
	
	printf("= %i", result);
	
}
