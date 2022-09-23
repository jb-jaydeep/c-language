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
    printf("(x+y+z)^2 = %d",(x*x)+(2*x*y)+(2*y*z)+(2*z*x)+(y*y)+(z*z));
    getch();
}