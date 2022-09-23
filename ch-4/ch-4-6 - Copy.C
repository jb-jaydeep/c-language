#include<stdio.h>
#include<conio.h>
main()
{
    int x,y,z;
    clrscr();
    printf("ENTER A VALUE OF X = ");
    scanf("%d",&x);
    printf("ENTER A VALUE OF Y = ");
    scanf("%d",&y);
    printf("ENTER A VALUE OF Z = ");
    scanf("%d",&z);
    printf("(x-y-z)^3 = %d",(x*x*x)-(y*y*y)-(z*z*z)-(3*(x+y))+(3*(y+z))+(3*(z+x)));
    getch();
}