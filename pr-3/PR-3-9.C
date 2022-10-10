#include<stdio.h>
#include<conio.h>

main ()
{
    int n, i, rev = 0, sum = 0 ,mul=1;
    clrscr();

    printf (" Enter a Number : ");
    scanf (" %d", &n);

    i = n;
    while (i > 0)
    {
	mul = mul * i%10;
	sum = sum + i % 10;
	i = i/10;
    }

    if ( mul == sum)
    {
	printf (" \n %d is a Magic Number. ", n);
    }
    else
    {
	printf (" \n %d is not a Magic Number. ", n);
    }

    getch();

}