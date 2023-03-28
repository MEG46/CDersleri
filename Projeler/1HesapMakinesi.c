#include <stdio.h>
float sum(float num1,float num2,char ch){
	return num1 + num2;
}
float subs(float num1,float num2,char ch){
	return num1 - num2;
}
float mult(float num1,float num2,char ch){
	return num1 * num2;
}
float div(float num1,float num2,char ch){
	return num1 / num2;
}
void printres(float num1,float num2,char ch,float result){
	printf("%f %c %f = %f\n",num1,ch,num2,result);
}
void invalid(){
	printf("Invalid Process!\n");
}
int main(){
	char ch;
	float num1,num2,result=0;
	int count=1;
	while(count>0){
		if(count==1){
			printf("Please enter a number : ");
			scanf("%f",&num1);
			fflush(stdin);
			printf("Please enter a process : ");
			scanf("%c",&ch);
			fflush(stdin);
			printf("Please enter a number : ");
			scanf("%f",&num2);
			fflush(stdin);
			if(ch=='+'){
				result=sum(num1,num2,ch);
				printres(num1,num2,ch,result);
				num1=result;
			}else if(ch=='-'){
				result=subs(num1,num2,ch);
				printres(num1,num2,ch,result);
				num1=result;
			}else if(ch=='*'||ch=='x'){
				result=mult(num1,num2,ch);
				printres(num1,num2,ch,result);
				num1=result;
			}else if(ch=='/'){
				if(num2==0){
					printf("Couldn't be divided by zero! Please enter a different number!\n");
				}else{
				result=div(num1,num2,ch);
				printres(num1,num2,ch,result);
				num1=result;
			}
			}else{
				invalid();
			}
		}else{
			printf("Num1 : %f\n",num1);
			printf("Please enter a process : ");
			scanf("%c",&ch);
			fflush(stdin);
			printf("Please enter a number : ");
			scanf("%f",&num2);
			fflush(stdin);
			if(ch=='+'){
				result=sum(num1,num2,ch);
				printres(num1,num2,ch,result);
				num1=result;
			}else if(ch=='-'){
				result=subs(num1,num2,ch);
				printres(num1,num2,ch,result);
				num1=result;
			}else if(ch=='*'||ch=='x'){
				result=mult(num1,num2,ch);
				printres(num1,num2,ch,result);
				num1=result;
			}else if(ch=='/'){
				if(num2==0){
					printf("Couldn't be divided by zero! Please enter a different number!\n");
				}else{
				result=div(num1,num2,ch);
				printres(num1,num2,ch,result);
				num1=result;
			}
		   }else if(ch=='z'){
				count=0;
				printf("Numbers are refreshed!\n");
			}else{
				invalid();
			}
	}
	count++;
}
return 0;
}