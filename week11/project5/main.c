#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	FILE* fp = fopen("sample.txt", "w");
	int i = 0;
	char str[100];
	
	for (i = 0; i<3; i++){
		printf("input a word:");
		scanf("%s", str);
		fprintf(fp, "%s\n", str);
	}
	
	fclose(fp);
	
	return 0;
}
