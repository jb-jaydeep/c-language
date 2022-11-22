#include<stdio.h>
void main(){
	FILE *fp,*f1;
	char name[100];
	fp = fopen("C:\\Users\\jaydeepb borda\\Dropbox\\PC\\Desktop\\hello.txt","r");
	f1 = fopen("C:\\Users\\jaydeepb borda\\Dropbox\\PC\\Desktop\\hello1.txt","a");
	fgets(name,100,fp);
	fprintf(f1,"%s\n",name);
}
