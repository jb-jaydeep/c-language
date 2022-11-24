#include <stdio.h>
int main()
{
	
int i,b,c, x, pos, n ;

printf("Enter The Size Of Array A = ");
scanf("%d",&n);

int a[n];

for (i = 0; i < n; i++)
	{
		a[i] = i + 1;
	}
	
	for (i = 0; i < n; i++)
	{ 
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n--------------------------------------------\n");
	
	printf("Enter Your Value =");
	
	scanf("%d",&b);
	
	
	printf("\n--------------------------------------------\n");
	
	printf("Enter Add Values's Position = ");
	scanf("%d",&pos);
	
for (i = n-1; i >= pos; i--)
{
	a[i+1]= a[i];
}

	a[pos] =b;
	
	n++;
		
for (i = 0; i < n; i++)
{
	printf("%d ", a[i]);
}
}
