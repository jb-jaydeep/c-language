#include<stdio.h>

int Fl(char str[]);

int main() 
{
   char str[100];
   int l;

   printf("\nEnter the String : ");
   gets(str);

   l = Fl(str);

   printf("\nLength of the String is : %d", l);
   return(0);
}

int Fl(char str[]) 
{
   int len = 0;
   while (str[len] != '\0')
      len++;
   return (len);
}
