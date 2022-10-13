#include <stdio.h>
int main() 
{
    int n,i;
    int sum = 0,avg=1;

    printf("Enter the length of array : ");
    scanf("%d", &n);
	int a[n];
   
       for (i = 0; i < n; i++)
	    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
        sum += a[i];
    	}

    avg = sum / n;
    printf("Average = %d", avg);
}

