#include<stdio.h>

void div()
{
	int n;
	printf("Enter Any Value: ");
    scanf("%d",&n);

	if(n%3==0 && n%5==0)
    {
    	printf("Your number is Divisable");
	}
	else
	{
		printf("Your number is not Divisable");
	}
}

main()
{
	div();
}

