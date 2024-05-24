

#include <stdio.h>
int main(){
	int score;

	printf("enter your score:");
	scanf("%d", &score);
	if(score>=90 && score<=100){
	printf("Your grade is A");
	}

	else if(score>=80 && score<=89){
	printf("Your grade is B");
	}

	else if(score>=70 && score<=79){
	printf("Your grade is C");
	}

	else if(score>=60 && score<=69){
		printf("Your grade is D");
	}

	else{
	printf("Your grade is F");
	}
	printf("\n\n");

	return 0;
}


