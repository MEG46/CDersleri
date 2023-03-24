#include <stdio.h>
int main(){
	float num1,num2,result=0;
	printf("Please enter a number : ");
	scanf("%f",&num1);
	printf("Please enter a number : ");
	scanf("%f",&num2);
	num1/=num2;
	printf("Result : %f\n",num1);
	return 0;
}