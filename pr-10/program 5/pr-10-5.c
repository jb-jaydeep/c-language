#include<stdio.h>

void main()
{
	FILE *fp1, *fp2;
	int a;
	fp1 = fopen("pr-5-1file.txt","r");
	fp2 = fopen("File 2.txt","a"); 
	
	fscanf(fp1,"%d", &a);
	printf("Value From File : %d", a);
	fprintf(fp2,"%d",a);
	
	fclose(fp1);
	fclose(fp2);
}
