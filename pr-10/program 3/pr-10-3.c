#include<stdio.h>

void main()
{
	FILE *fp1, *fp2, *fp3;
	int i,j,c;
	fp1  = fopen("odd.txt","w");
	fp2  = fopen("even.txt","w");
	fp3  = fopen("prime.txt","w");
	
	for(i=0; i<10; i++)
	{
		if(i%2 == 0)
		{
			fprintf(fp1,"%d",i);
		}
		else
		{
			printf(fp2,"%d",i);
		}
		
		if(c == 2)
		{
			fprintf(fp3,"%d",i);
		}
	}
	
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}
