#include<stdio.h>

main(){
	char str[5];
	int i;
	printf("Enter 5 character string :");
	scanf("%[^\n]",str);
	
	str[0]=str[0]+32;
	for(i=1;i<5;i++)
	{
		if(str[i]>=65 && str[i]<=90)
		printf("%c",str[i]+32);
	}
}
