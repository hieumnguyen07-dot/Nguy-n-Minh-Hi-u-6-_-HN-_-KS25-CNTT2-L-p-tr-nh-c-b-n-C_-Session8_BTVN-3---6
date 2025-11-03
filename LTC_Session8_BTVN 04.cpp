#include<stdio.h>


int main(){
	int arr[5];
	int i;
	for (i = 0 ; i < sizeof(arr)/sizeof(int); i++){
		printf(" \n array[%d] = ", i);
		scanf("%d",&arr[i]);
	}   printf("\n value of these array stuff");
	for (i = 0 ;i < sizeof(arr)/sizeof(int); i++  ){
		printf("array[%d] = %d \n ", i , arr[i]);
		
	}
	return 0;
	
}

