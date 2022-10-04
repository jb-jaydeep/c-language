
#include<stdio.h>
#include<conio.h>
main()
{
	int N;
	clrscr();
	printf(" enter N = ");
	scanf("%d",&N);

	while(N >= 1)
	{
		printf("%d\t",N);
		N--;
	}
	getch();
}
