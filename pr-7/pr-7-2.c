#include <stdio.h>

int arrsum (int a[],int n){
	int sum = 0,i;
	for (i=0;i<n;i++){
		sum += a[i];
	}
	return sum;
}

void main(){
	int n;
	printf("enter length of array :");
	scanf("%d",&n);
	int a[n],i,add;
	for (i=0;i<n;i++)
	{
		printf("enter a[%d]= ",i);
		scanf("%d",&a[i]);
	}

	add=arrsum(a,n);
	printf("sum of array : %d",add);
}
