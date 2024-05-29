/*Write a program to check if two strings are anagrams of each other.
 */

#include <stdio.h>
#include <stdlib.h>
 
void sort(char* string)
{
    int i,j;
    char temp;
    int n = sizeof(string)/sizeof(char);
    for (i = 0; i < n-1; i++) 
    {
        for (j = i+1; j < n; j++) 
        {
            if (string[i] > string[j]) 
            {
               temp = string[i];
               string[i] = string[j];
               string[j] = temp;
            }
        }
    }
}
void anagram(char* str1, char* str2)
{
    int l1 = sizeof(str1)/sizeof(char);
    int l2 = sizeof(str2)/sizeof(char);
    if(l1!=l2)
    {
        printf("Not anagram");
    }
    else
    {
        int count;
        sort(str1),sort(str2);
        for(int i=0;i<l1;i++)
        {
            if(str1[i]==str2[i])
                count++;
        }
        if(count==l1)
            printf("Anagram");
        else
            printf("Not anagram");
    }
}
 
int main()
{
    char str1[100],str2[100];
    printf("Enter two strings : ");
    scanf("%s%s",str1,str2);
    anagram(str1,str2);
    printf("\n\n");
    return 0;
}
