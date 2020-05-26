#include <stdio.h>

double Greatest(double n1, double n2, double n3)
{
	double large;
	
	if(n1 > n2 && n1 > n3)
	large = n1;
	else if(n2 > n1 && n2 > n3)
	large = n2;
	else if (n3 > n1 && n3 > n2)
	large = n3;

	return(large);
}

int
main(void){
	
	double num1, num2, num3, largest;
	
	printf("enter the number of num1:");
	scanf("%lf", &num1);
	printf("enter the number of num2:");
	scanf("%lf", &num2);
	printf("enter the number of num3:");
	scanf("%lf", &num3);

	largest = Greatest(num1, num2, num3);
	
	printf("the largest number is %.0lf", largest);		

return(0);
}