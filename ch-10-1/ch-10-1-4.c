#include<stdio.h>

main(){
	char str[5];
	int i;
	printf("Enter 5 character string :");
	scanf("%[^\n]",str);
	
	for(i=0;i<5;i++)
	{
		if(str[i]>=97 && str[i]<=122)
		printf("%c",str[i]-32);
	}
}
