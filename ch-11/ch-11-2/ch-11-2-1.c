#include<stdio.h>

int add(int a,int b)
	{
		return a+b;
	}
int sub(int a,int b)
	{
		return a-b;
	}
int multi(int a,int b)
	{
		return a*b;
	}
int div(int a,int b)
	{
		return a/b;
	}

main()
{
	int n,a,b,ans;

	do{
	printf("enter 1 for addition\n");
	printf("enter 2 for subtraction\n");
	printf("enter 3 for multiplication\n");
	printf("enter 4 for division\n");
	printf("enter 5 for escape\n");
	
	printf("What You want to do : ");
	scanf("%d",&n);

	
	
	switch(n)
	{
		if(n>=1 && n>=5)
		printf("Enter Value A: ");
		scanf("%d",&a);
		printf("Enter Value B: ");
		scanf("%d",&b);
		case 1 :
					ans = add(a,b);
					printf("Answer = %d\n ",ans );
				 	break;				 
		case 2 :
					ans = sub(a,b);
					printf("Answer = %d\n ",ans );
					break;
		case 3 :
					ans = multi(a,b);
					printf("Answer = %d\n ",ans );
					break;
		case 4 :
					ans = div(a,b);
					printf("Answer = %d\n ",ans );
					break;
		case 5 :
					break;
	}
	
	}while(n!=5);

}

