/*Write a program that prompts the user for a positive integer and then reports the closest integer having a whole number square root. For example, if the user enters 8, then the program reports 9. If the user enters 18, then the program reports 16.The program should work  for any number having one to seven digits.
 */


#include<stdio.h>

#include<math.h>

int main()
{
    long n;
    printf("Enter the number : ");
    scanf("%ld",&n);
    long a;
    a = sqrt(n);
    long b = a+1;
    long c = a*a;
    long d = b*b;
    long e = n-c;
    long f = d-n;
    if(e<=f)
        printf("Closest integer having a whole number square root is : %ld",c);
    else
        printf("Closest integer having a whole number square root is : %ld",d);
    printf("\n\n");
    return 0;
}
