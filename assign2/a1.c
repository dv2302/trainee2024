/* Write a program that prompts the user for a positive integer and then computes the sum of all the digits of the number. For example, if the user enters 2784, then the program reports 21. If the user enters 59, then the program reports 14. The program should work for any number having one to ten digits.
*/


#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the number : ");
    scanf("%d",&n);
    printf("Sum of digits of number is : ");
    int r,ans=0;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        ans = ans + r;
    }
    printf("%d",ans);
    printf("\n\n");
    return 0;
}
