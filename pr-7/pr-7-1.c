#include<stdio.h>
long int f(int n);
int main() 
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n,f(n));
    return 0;
}

long int f(int n) 
{
    if (n>=1)
        return n*f(n-1);
    else
        return 1;
}
