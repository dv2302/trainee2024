/*C program to check if a number is an automorphic number (a number whose square ends in the same digits as the number itself).
Example:
Consider the number 76.
1. Calculate the square of the number:
      76*76=5776
2. Determine the number of digits in the original number:
	Number of digits in 76 is 2.
3. Therefore extract the last 2 digits from the square: (mod of 10 to the power 2)
       5776 mod 100 = 76
4. Compare the extracted digits with the original number:
	Extracted digits: 76
	Original number: 76
Since the extracted digits (76) match the original number (76), 76 is an automorphic number.
*/

#include <stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int sq = n*n;
    int temp =n;
    int digit=0;
    while(temp!=0)
    {
        temp = temp/10;
        digit++;
    }
    int temp2 = pow(10,digit);
    int temp3 = sq%temp2;
    if(temp3 == n)
        printf("%d is an automorphic number",n);
    else
        printf("%d is not an automorphic number",n);
    printf("\n\n");
    return 0;
}
