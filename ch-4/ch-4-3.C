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
    printf("(x+y)^3 = %d",(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y));
    getch();
}