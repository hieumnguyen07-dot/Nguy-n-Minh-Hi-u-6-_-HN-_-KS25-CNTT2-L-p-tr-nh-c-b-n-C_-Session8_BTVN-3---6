#include<stdio.h>

int main(){
	int n, arr[1000],i;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	
	for (i=0;i < n; i++){
		printf("nhap gia tri phan tu: ");
		scanf("%d",&arr[i]);
	}
	
	for (i=0;i < n; i++){
		if (arr[i] % 2 == 0){
			arr[i] += 3;	
		} else {
			arr [i] += 2;	
		} 
		printf("%d",arr[i]);
	}
	
	return 0;	
}
