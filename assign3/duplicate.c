/*. Given an array of integers, write a program to find all duplicate elements in the array.*/

#include<stdio.h>
int main(){

int arr[] = {1,3,1,4,5,2,6,2,7,2};

int length = sizeof(arr)/sizeof(arr[0]);

printf("Duplicate elements in the array:\n");
 for(int i = 0; i < length; i++)
{
	for(int j = i + 1;j < length; j++)
	{
		if(arr[i] == arr[j])
			printf("%d\n", arr[j]);
	}
}
return 0;
}
