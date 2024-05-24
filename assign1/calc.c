#include<stdio.h>
int main(){
	int n1;
	int n2;
	int result;
	char op;

	printf("Enter any one operator among: '+','-','*','/'");
	scanf("%c", &op);

	printf("Enter two numbers:");
	scanf("%d%d", &n1, &n2);

	switch(op){
		case '+':
		result = n1+n2;
		printf("addition is: %d", result);
		break;
	

		
		case '-':
	
		result = n1-n2;
		printf("subtraction is: %d", result);
		break;
		

		case '*':
		result = n1*n2;
		printf("multiplication is: %d", result);
		break;


		case '/':
		result = n1/n2;
		printf("division is: %d", result);
		break;

		default:
		printf("Enter a correct operator");
	}

	printf("\n\n");
	return 0;
}

