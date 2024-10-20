#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int x)
{
	int res = 1;
	int i;
	for (i=1; i<=x; i++)
		res*=i;
	return res;
}


int combination(int n, int r)
{
	return factorial(n)/(factorial(n-r)*factorial(r));
}


int get_integer()
{
	printf("Enter the value: ");
	int k;
	scanf("%d", &k);
	return(k);
}


int main(void)
{
	int n = get_integer(n);
	int r = get_integer(r);

	int result = combination(n,r);
	printf("The result of C(%d, %d) is %d.", n, r, result);
}
