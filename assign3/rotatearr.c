//Write a program to rotate an array of n elements to the right by k steps.


#include<stdio.h>

int main(){
	int arr[] = {1,2,3,4,5,6,7,};
	int length = sizeof(arr)/sizeof(arr[0]);
	int n = 4;

	printf("Enter an array:\n");
	for(int i = 0; i < length; i++){
		printf("%d",arr[i]);
	}

	for(int i = 0; i < n; i++){
		int j, last;

	last = arr[length-1];

	for(j = length-1; j > 0; j--){
		arr[j] = arr[j-1];
	}
	arr[0] = last;

	}

	printf("\n");

	printf("Array after rotation:");
	for(int i = 0; i < length; i++){
		printf("%d",arr[i]);
	}

	return 0; 
}


