#include <stdio.h>
#include <string.h>
#define NL 20

typedef struct car
{
	char car_make[NL];
	char car_color[NL];
	struct car* next;
}car;

int 
main(void){
	
	char make[NL];
	char color[NL];
	car *p, *start;
	
	start = NULL;
	printf("Enter a car's make: ('END' to finish) ");
	fgets(make, sizeof(make), stdin);
	make[strlen(make)-1] = '\0';

	printf("Enter a car's color: ('END' to finish) ");
	fgets(color, sizeof(color), stdin);
	color[strlen(color)-1] = '\0';

	while (strcmp(make, "END") != 0)
	{
		p = (car *) calloc (1, sizeof(car));
		strcpy(p -> car_make, make);
		p -> next = start;
		start = p;
		
		printf("Ener a car's make('END' to finish):");
		fgets(make, sizeof(make), stdin);
		make[strlen(make)-1] = '\0';
	}
	
	p = start = NULL;
	while (strcmp(color, "END") != 0)
	{
		p = (car *) calloc (1, sizeof(car));
		strcpy(p -> car_color, color);
		p -> next = start;
		start = p;
		
		printf("Enter a car's color: ('END' to finish) ");
		fgets(color, sizeof(color), stdin);
		color[strlen(color)-1] = '\0';

	}

	p = start;
	while(p!=NULL)
	{
		printf("The car's name is %s, the color is %s\n", p -> car_make, p -> car_color);
		p = p -> next;
	}
	
	return(0);
}