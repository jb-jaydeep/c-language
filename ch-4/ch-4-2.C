#include<stdio.h>
#include<conio.h>
main()
{
    int x,y;
    clrscr();
    printf("ENTER A VALUE OF X = ");
    scanf("%d",&x);
    printf("ENTER A VALUE OF Y = ");
    scanf("%d",&y);
    printf("(x-y)^2 = %d",(x*x)-(2*x*y)+(y*y));
    getch();
}