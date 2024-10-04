#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int num1;
	int num2;
	
	printf("input two integers: ");
	scanf("%d%d", &num1, &num2);
	
	int sum = num1 + num2;
	printf("\n+ result is %d", sum);
	int sub = num1 - num2;
	printf("\n- result is %d", sub);
	int mul = num1 * num2;
	printf("\n* result is %d", mul);
	int div = num1 / num2;
	printf("\n/ result is %d", div);
	int rem = num1 % num2;
	printf("\n%% result is %d", rem);
	
}
