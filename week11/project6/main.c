#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
void main(void) {
	FILE *fp = NULL;
	char c;
	fp = fopen("sample.txt", "r");
	if (fp==NULL)
		printf("������ ������\n");
	while ((c=fgetc(fp)) != EOF)
		putchar(c);
		
	fclose(fp);
}
*/


void main(void) {
	FILE *fp = NULL;
	char str[100];
	int i;
	fp = fopen("sample.txt", "r");
	if (fp==NULL)
		printf("������ ������\n");
	while ((fgets(str, sizeof(str), fp)) != 0)
		printf("%s", str);
		
	fclose(fp);
}
