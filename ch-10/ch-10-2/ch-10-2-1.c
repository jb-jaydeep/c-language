#include<stdio.h>
#include<string.h>

main()
{
	char p[100];
	 printf("Enter the password:");
	gets(p);
	int ch=0,dig=0,ss=0;
	int i;
   for(i=0; i<strlen(p); i++)
   {
   	if(p[i] >= 65 && p[i] <= 90 || p[i] >= 97 && p[i]<= 122 )
		{
		     ch++;	
		} 
		else if(p[i] >= 48 && p[i] <= 57)
		{
			dig++;
		}
		else
		{
			ss++;
		}
	}
	if(ch>0 && dig>0 && ss==1)
	{
		printf("your password is valid:");
	}
	else
	{
		printf("Your password is not valid \n pelase enter new password:");
		
		
	}
}
