#include <stdio.h>

int

main(void){

	int people, seat, empty;
	double bus;

	seat = 40;

	do
	{
	printf("enter the number of people (greater than zero): ");
	scanf("%d", &people);
	}while (people < 0);

	if(people % seat != 0)
		bus = (int)(people/seat) + 1;
	else
		bus = people / seat;

	empty = bus*seat - people;

	printf("The number of bus is %lf\n", bus);
	printf("The empty seats in the last bus is %d", empty);

	return(0);
}