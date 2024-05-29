/*Write a program to reverse the order of words in a given string
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char* begin, char* end)
{
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

void reverseorder(char* s)
{
    char* begin = s;
    char* temp = s;

    while (*temp) {
        temp++;
        if (*temp == '\0') {
            reverse(begin, temp - 1);
        }
        else if (*temp == ' ') {
            reverse(begin, temp - 1);
            begin = temp + 1;
        }
    }

    reverse(s, temp - 1);
    printf("%s", s);
}

int main()
{
    char s[] = "All the best";
    char* temp = s;
    reverseorder(s);
    printf("\n\n");
    return 0;
}
