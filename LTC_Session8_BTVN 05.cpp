#include <stdio.h>

int main(){
	int listNumber[5] = {1,3,2,5,6};
	int max = listNumber[0], min = listNumber[0];
	
	for(int i = 0 ; i < 5 ; i++){
		if(listNumber[i] > max) {
			max = listNumber[i];
		}
		if(listNumber[i] < min) {
			min = listNumber[i];
		}
	}
	printf("So lon nhat là %d", max);
	printf("So nho nhat la %d", min);
	
	return 0;
}
