#include<stdio.h>

void main(){
	
	FILE *fp1,*fp2;
	
	fp1 = fopen("xyz.txt","r");
	fp2 = fopen("abc.txt","w");
	
	int a,b,c=0;
	
	fscanf(fp1,"%d",&a);
	
	while(a!=0){
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
	fprintf(fp2,"%d ",c);
	
}

