//Write a program to merge two sorted arrays into a single sorted array.

#include <stdio.h>

int main()
{
    int s1,s2,s3;
    printf("enter size of 1st array:");
    scanf("%d",&s1);
    printf("enter size of 2nd array:");
    scanf("%d",&s2);
    s3=s1+s2;
    int arr1[s1],arr2[s2],arr3[s3];
     printf("enter elements of first array:");
    for(int i=0;i<s1;i++){
        scanf("%d",&arr1[i]);
        arr3[i]=arr1[i];
    }
    int k=s1;
    printf("enter elements of second array");
    for(int i=0;i<s2;i++){
        scanf("%d",&arr2[i]);
        arr3[k]=arr2[i];
        k++;
    }
    printf("merged array after sorting:");
    for(int i=0;i<s3;i++){
        int temp;
        for(int j=i+1;j<s3;j++){
            if(arr3[i]>arr3[j]){
                temp=arr3[i];
                arr3[j]=arr3[j];
                arr3[j]=temp;
            }
        }
    }
    for(int i=0;i<s3;i++){
        printf("%d",arr3[i]);

    }


    return 0;
}
