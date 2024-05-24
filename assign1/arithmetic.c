/*  Write a program to perform simple arithmetic operation on two integers.
 */

#include <stdio.h>
int main(){
	int num1, num2;
	int add,sub,multiply;
	float div;
	

	printf("Enter two numbers:");
	scanf("%d%d", &num1, &num2);

	add = num1 + num2;
	sub = num1 - num2;
	multiply = num1 * num2;
	div = (float)num1 / num2;
	printf(" Addition = %d\n", add);
	printf(" Subtraction = %d\n",sub);
	printf("Multiplication = %d\n",multiply);
	printf("Division = %f\n",div);

	return 0;
}

