#include <stdio.h>
int factor(int num){
	if(num==0||num==1){
		return 1;
	}
	return num*factor(num-1);
}

int main(){
	int num,fact=1;
	printf("Please enter a number : ");
	scanf("%d",&num);
	fact=factor(num);
	printf("Factorial of %d = %d\n",num,fact);
	return 0;
}