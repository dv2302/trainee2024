/*Write a program to check if a given string is a palindrome or not.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindrome(char* s)
{
    int len = strlen(s);
    int start = 0;
    int end = len-1;
    while(start<end)
    {
        if(s[start]!=s[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main()
{
    char s[100];
    printf("Enter the string : ");
    scanf("%s", s);
    int result = palindrome(s);
    if(result ==1)
        printf("Palindrome");
    else
        printf("Not a palindrome");
    printf("\n\n");
    return 0;
}
