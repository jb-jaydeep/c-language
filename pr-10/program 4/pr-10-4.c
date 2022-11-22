#include<stdio.h>

void main()
{
	FILE *fp;
	char c[100];
	char str[] = "Jaydeep Borda";
	int i;
	
	fp = fopen("pr-4.txt","a");
	
	for(i=0; str[i] != '\n'; i++)
	{
		fputs(str[i],fp);
	}
	
	fclose(fp);
}
