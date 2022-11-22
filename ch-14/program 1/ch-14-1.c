#include<stdio.h>
void main(){
	FILE *fp,*f1;
	char name[100];
	fp = fopen("hello.txt","r");
	f1 = fopen("hello1.txt","a");
	fgets(name,100,fp);
	fprintf(f1,"%s\n",name);
}
