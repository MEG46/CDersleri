#include <stdio.h>
int factor(int num){
	int result=1;
	if(num==0||num==1){
		return 1;
	}else{
		for(int i=1;i<=num;i++){
			result*=i;
		}
		return result;
	}
	
}
int main(){
	int num,fact=1;
	printf("Please enter a number : ");
	scanf("%d",&num);
	fact=factor(num);
	printf("Factorial of %d = %d\n",num,fact);
	return 0;
}