#include<stdio.h>

main()
{
	int n,i,j,k,temp;
	
	printf("Enter the size of elements of Array : ");
	scanf("%d", &n);
	
	printf("\n\n");
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n--------------------------------------\n");
	
	printf("how many times left rotate : ");
    scanf("%d", &k);
     
    for(i=0; i<k; i++)
    {
        temp=a[0];
        for(j=0; j<n-1; j++)
        {
           a[j]=a[j+1];
		}
 
         a[n-1]=temp;
    }
    
    printf("\n--------------------------------------\n");
    
    printf("array elements after left rotate  : ");
 
    for(i=0; i<n; i++)
    {
       printf("%d ",a[i]);
    }
 }
