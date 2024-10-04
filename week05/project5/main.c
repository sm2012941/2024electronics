#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int a, b;
	
	printf("Input two integers: ");
	scanf("%d%d", &a, &b);
	
	int result_1, result_2, result_3, result_4, result_5;
	
	result_1 = a & b;
	result_2 = a | b;
	result_3 = a^b;
	result_4 = a<<1;
	result_5 = a>>1;
	
	printf("& result is %d\n", result_1);
	printf("| result is %d\n", result_2);
	printf("^ result is %d\n", result_3);
	printf("<<1 result is %d\n", result_4);
	printf(">>1 result is %d\n", result_5);
	
}
