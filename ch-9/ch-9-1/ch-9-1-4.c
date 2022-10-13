#include <stdio.h>
int main() 
{
    int n,i;
    

    printf("Enter the length of array a : ");
    scanf("%d", &n);
	int a[n];
	
	 for (i = 0; i < n; i++)
	    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    	}
	printf("Enter the length of array b : ");
    scanf("%d", &n);
	int b[n];
   
       for (i = 0; i < n; i++)
	    {
        printf("Enter b[%d]: ", i);
        scanf("%d", &b[i]);
        
    	}
		int c[n];
    	for (i=0;i<n;i++)
    	{
    	
    	c[i]=a[i]+b[i];
    	printf("%d,", c[i]);
    	}
    	
    	
}

