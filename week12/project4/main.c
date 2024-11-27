#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int i;
	int grade[5];
	
	for (i=0; i<5; i++)
	{
		printf("Input value - grade[%i] = ", i);
		scanf("%d", &grade[i]);
	}
	
	int sum;
	
	for (i=0; i<5; i++)
	{
		int *gradeptr = &grade[i];
		printf("grade[%i] = %d\n", i, *gradeptr);
		sum += *gradeptr;
	}
	
	int average = sum/5;
	printf("average: %d", average);
	return 0;
}
