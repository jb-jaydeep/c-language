#include<stdio.h>

void main()
{
	FILE *fp;
	char a[20];
	fp  = fopen("file-1.txt","r");
	fgets(a,20,fp);
	fputs(a,fp);
	printf("%s",a);
	fclose(fp);
}
