#include <stdio.h>
int main(){
	int i;
	printf("Even numbers between 0 and 100:\n\n");
	for(i=0;i<=100;i++){
		if(i%2==0){
			printf("%d\t",i);
		}
	}
	printf("\n\nOdd numbers between 0 and 100:\n\n");
	for(i=0;i<=100;i++){
		if(i%2!=0){
			printf("%d\t",i);
		}
	}
	return 0;
}