#include <stdio.h>
int main(){
	int arr[50],arr1[50];
	int i,j=0,k=0;
	for(i=0;i<100;i++){
		if(i%2==0){
			arr[k]=i;
			k++;
		}else{
			arr1[j]=i;
			j++;
		}
	}
	printf("Even Numbers :\n\n");
	for(i=0;i<sizeof(arr)/sizeof(int);i++){
		printf("%d\t",arr[i]);
	}
	printf("\n\nOdd Numbers :\n\n");
	for(i=0;i<sizeof(arr1)/sizeof(int);i++){
		printf("%d\t",arr1[i]);
	}
	return 0;
}