#include<stdio.h>

main()
{
	int n,x,i,k;
	
    printf("Enter length of Array a : ");
    scanf("%d", &n);
    int a[n];
    int m[n];
    for(i=0;i<n;i++)
    {
    	printf("Enter a[%d]: ",i);
    	scanf("%d",&a[i]);
    	m[i]=a[i];
    }
    k=i;
    
    printf("Enter length of Array b : ");
    scanf("%d", &x);
    int b[x];
    
    for(i=0;i<x;i++)
    {
    	printf("Enter b[%d]: ",i);
    	scanf("%d",&b[i]);
    	m[k]=b[i];
    	k++;
    }
     
    printf("\nThe new array after merging is:\n");
    for(i=0; i<k; i++)
        printf("%d, ", m[i]);
}
