#include <stdio.h>

int main(){
	int per,i;
	printf("Please enter how many people do you want to enter : ");
	scanf("%d",&per);
	char name[30][per],surname[30][per];
	int qz1[per],qz2[per],mid[per],fnl[per];
	float avg[per],total=0;
	for(i=0;i<per;i++){
		printf("%d.Person:\n\n-----------------------------------------\n\n",i+1);
		printf("Name : ");
		scanf("%s",name[i]);
		fflush(stdin);
		printf("\n\n-----------------------------------------\n\n");
	    printf("Surname : ");
		scanf("%s",surname[i]);
		fflush(stdin);	
		printf("\n\n-----------------------------------------\n\n");
	    printf("1st Quiz : ");
		scanf("%d",&qz1[i]);
		fflush(stdin);
		printf("\n\n-----------------------------------------\n\n");
	    printf("2nd Quiz : ");
		scanf("%d",&qz2[i]);
		fflush(stdin);
		printf("\n\n-----------------------------------------\n\n");
	    printf("Midterm : ");
		scanf("%d",&mid[i]);
		fflush(stdin);	
		printf("\n\n-----------------------------------------\n\n");
	    printf("Final : ");
		scanf("%d",&fnl[i]);
		fflush(stdin);
		avg[i]=0.1*qz1[i]+0.1*qz2[i]+0.4*mid[i]+0.4*fnl[i];
		total+=avg[i];
		
	}
	total/=per;
	for(i=0;i<per;i++){
		printf("%d.Person:\n\n-----------------------------------------\n\n",i+1);
		printf("Name : %s",name[i]);
		printf("\n\n-----------------------------------------\n\n");
	    printf("Surname :%s",surname[i]);
		printf("\n\n-----------------------------------------\n\n");
	    printf("1st Quiz : %d",qz1[i]);
		printf("\n\n-----------------------------------------\n\n");
	    printf("2nd Quiz : %d",qz2[i]);
		printf("\n\n-----------------------------------------\n\n");
	    printf("Midterm : %d",mid[i]);	
		printf("\n\n-----------------------------------------\n\n");
	    printf("Final : %d",fnl[i]);
	    printf("\n\n-----------------------------------------\n\n");
	    printf("Your Average : %f",avg[i]);
	    printf("\n\n-----------------------------------------\n\n");
	    printf("Class Average : %f",total);
	    printf("\n\n-----------------------------------------\n\n");
	}
	return 0;
	}