#include<stdio.h>

main()
{
	int i,s,j;
	
	for (i=1;i<=5;i++)
	{
		for(s=1;s<=5-i;s++)
		{
			printf(" ");
			
		}
		for(j=i;j>=1;j--)
		{
			printf("%c",j+64);
		}
		printf("\n");
	}
}
