#include<stdio.h>
#include<string.h>

void main()
{
	FILE *fp1,*fp2;
	
	fp1 = fopen("vowels.txt","w");
	fp2 = fopen("cons.txt","w");
	
	char c[50],i;
	
	printf("Enter any string : ");
	scanf("%[^\n]",&c);
	
	for(i=0;i<strlen(c);i++)
	{
		if(c[i]=='A'|| c[i]=='E'|| c[i]=='I'|| c[i]=='O'|| c[i]=='U'|| c[i]=='a'|| c[i]=='e'|| c[i]=='i'|| c[i]=='o'|| c[i]=='u')
		{
			fprintf(fp1,"\n%c",c[i]);
		}
		else
		{
			fprintf(fp2,"\n%c",c[i]);
		}
	}
	
	fclose(fp1);
	fclose(fp2);
}

