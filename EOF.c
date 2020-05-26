#include <stdio.h>

int
main(void)
{
	int number,  status;
	
	printf("please enter a number: ");
	scanf("%d", &number);
	
	status = number;	

	printf("The status is %d", status);
	return(0);
}