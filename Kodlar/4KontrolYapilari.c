#include <stdio.h>

int main(){
	char ch;
	int num1,num2;
	int result=0;
	printf("Please enter a number : ");
	scanf("%d",&num1);
	fflush(stdin);
	printf("Please enter a process : ");
	scanf("%c",&ch);
	printf("Please enter a number : ");
	scanf("%d",&num2);
	if(ch=='+'){
		result=num1+num2;
		printf("%d %c %d = %d\n",num1,ch,num2,result);
	}else if(ch=='-'){
		result=num1-num2;
		printf("%d %c %d = %d\n",num1,ch,num2,result);
	}else if(ch=='*'||ch=='x'){
		result=num1*num2;
		printf("%d %c %d = %d\n",num1,ch,num2,result);
	}else if(ch=='/'){
		if(num2==0){
			printf("Couldn't be divided by zero! Please enter a different number!\n");
		}else{
		result=num1/num2;
		printf("%d %c %d = %d\n",num1,ch,num2,result);
	}
	}else{
		printf("Invalid Process!\n");
	}
	return 0;
}