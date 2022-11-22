#include<stdio.h>
struct student {
    int id;
    char name[100];
    float chem,math,phy,eng,com;
   
};
#include<stdio.h>
struct stu {
    int id;
    char name[100];
    float c,m,p,e,co;
   
};


int main() {
	FILE *fp;
	fp = fopen("marksheet-jb.txt","a");
	int n;
	printf("enter number of student :");
	scanf("%d",&n);
    struct student s[n];
    int i;
    char grade;
    float tm,per;
    for(i=0;i<n;i++)
    {			
		system("cls");
		printf("Student %d\n",i+1);
		printf("Enter name :",i+1);
        scanf("%s",s[i].name);
        printf("Enter Id no :",i+1);
        scanf("%d", &s[i].id);
        
        printf("Enter Chemistry marks :",i+1);
        scanf("%f", &s[i].chem);
        printf("Enter Maths marks :",i+1);
        scanf("%f", &s[i].math);
        printf("Enter Physics marks :",i+1);
        scanf("%f", &s[i].phy);
        printf("Enter english marks :",i+1);
        scanf("%f", &s[i].eng);
        printf("Enter computer marks :",i+1);
        scanf("%f", &s[i].com);
    }
    
    	fprintf(fp,"\nId\t\tName\tChem\tMaths\tPhy\tEng\tCom\tmarks\tPercent\tGrade\n------- ------- ------- ------- ------- ------- ------- ------- ------- -------\n\n");
    	
 	 for(i=0;i<n;i++){
	  	
		 tm = (s[i].chem + s[i].math + s[i].phy + s[i].eng + s[i].com);
    	 per = (tm)/500*100;
    	 
		 if (per >= 90)
        grade = 'A';
    	else if (per >= 80 && per < 90)
        grade = 'B';
    	else if (per >= 70 && per < 80)
        grade = 'C';
    	else if (per >= 60 && per < 70)
        grade = 'D';
    	else
        grade = 'E';
        fprintf(fp,"%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%0.2f\t%.2f\t%c\n",s[i].id,s[i].name,s[i].chem,s[i].math,s[i].phy,s[i].eng,s[i].com,tm,per,grade);
	}
}
