#include<stdio.h>
union marks {
    int rno,i;
    char name[30];
    float cm, mm, pm;
};


int main() {
	
    union marks m[5];
    int i;
    
	
    for(i=0;i<5;i++)
    {
		system("cls");
		printf("Student %d\n",i+1);
        printf("Enter roll no. :");
        scanf("%d", &m[i].rno);
        printf("Enter name :");
        scanf("%s",m[i].name);
        printf("Enter Chemistry marks :");
        scanf("%f", &m[i].cm);
        printf("Enter Maths marks :");
        scanf("%f", &m[i].mm);
        printf("Enter Physics marks :");
        scanf("%f", &m[i].pm);
    }
    
    system("cls");
	printf("percentage\n\n");
	for (i=0;i<5;i++){
		float per = (m[i].cm + m[i].mm + m[i].pm)/300*100;
		printf("percentage :%.2f\n",per);
	}   
  return 0;
}
