#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("enter A:");
	scanf("%d",&a);
	printf("enter B:");
	scanf("%d",&b);
	printf("enter C:");
	scanf("%d",&c);
		if(a==b && b==c && c==a)
		{
			printf("All are same...");
		}
		else if(a==b && a!=c)
		{
			if(a>c)
			{
			      printf("A and B are big.");
			}
			else
			{
			      printf("C is big.");
			}
		}
		else if(b==c && b!=a)
		{
			if(b>a)
			{
				printf("C and B are big.");
			}
			else
			{
				printf("A is big.");
			}
		}
		else if(a==c && a!=b)
		{
			if(a>b)
			{
				printf("A and C are big.");
			}
			else
			{
				printf("B is big.");
			}
		}
		else if(a>b)
		{
			if(a>c)
			{
				printf("A is big.");
			}
			else
			{
				printf("c is big.");
			}
		}
		else
		{
			if(b>c)
			{
				printf("B is big.");
			}
			else
			{
				printf("C is big.");
			}
		}
		getch();

}