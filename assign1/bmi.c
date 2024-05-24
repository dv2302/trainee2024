#include<stdio.h>

int main(){
	float weight,height, bmi;
	 printf("Enter weight in kg");
	 scanf("%f", &weight);

	 printf("Enter Height in metres");
	 scanf("%f", &height);

	 bmi = weight/(height*height);
	 printf("Your BMI is:%f",bmi);

	 if(bmi>18.5){
		 printf("Underweight");
	 }

	 else if(bmi>=18.5 && bmi<=24.9){
		 printf("Normal weight");
	 }

	 else if(bmi>=25 && bmi<=29.9){
		 printf("Overweight");
	 }

	 else{
		 printf("obesity");
	 }

	 printf("\n\n");

	 return 0;
}
