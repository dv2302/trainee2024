
/*  To calculate Area and Circumference of a circle
 */

#include <stdio.h>
#define PI 3.14
int main(){
	float radius;
	float area;
	float circumference;
	printf("\nEnter the radius\n");
	scanf("%f", &radius);
	area = PI * radius * radius;
	circumference = 2 * PI * radius;
	printf("Area= %f", area);
	printf("Circumference = %f", circumference);
	printf("\n\n");
	
	return 0;
}

