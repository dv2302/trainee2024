/*Find the Missing Number in an Array:
Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, write a program to find the missing number
*/

#include<stdio.h>
#include<stdlib.h>

void missing(int arr[], int n)
{
    int ans;
    int temp[n+1];
    int i;
    for(i=0;i<n+1;i++)
    {
        temp[i]=i;
    }
    for(i=0;i<n+1;i++)
    {
        if(arr[i]!=temp[i])
        {
            ans = i;
            break;
        }
    }
    printf("Missing element is : %d",ans);
}

int main()
{

    int arr[]={0,1,2,3,4,5,6,8,9};
    int n = sizeof(arr)/sizeof(int);
    missing(arr,n);
    printf("\n\n");
    return 0;
}
