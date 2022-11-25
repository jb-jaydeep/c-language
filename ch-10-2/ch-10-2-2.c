#include<stdio.h>
#include<string.h>

main()
{
	char em[100];
	printf("Enter the E_mali:");
	gets(em);
	int ch=0,dig=0,at=0;
	int i;
   for(i=0; i<strlen(em); i++)
   {
   	if(em[i] >= 65 && em[i] <= 90 || em[i] >= 97 && em[i]<= 122 )
		{
		     ch++;	
		} 
		else if(em[i] >= 48 && em[i] <= 57)
		{
			dig++;
		}
		else if (em[i] == '@')
		{
			at++;
		}
	}
	if(ch>0 && dig>0 && at==1)
	{
		printf("your E_mali is valid:");
	}
	else
	{
		printf("Your E_mali is not valid \n pelase enter new E_mail:");
		
		
	}
}
