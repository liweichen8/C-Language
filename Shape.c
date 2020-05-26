#include <stdio.h>
#define PI 3.14

typedef struct
	{
		float line;
		float radius;
		float areacircle;
		float areacylinder;
		float volume;
	} shape_t;

int
main(void){

	shape_t shape;	

	shape.line = 5;
	shape.radius = 3;
	shape.areacircle = PI * shape.radius * shape.radius;
	shape.areacylinder = (2 * shape.areacircle) + (shape.line * 2 * PI * shape.radius);
	shape.volume = shape.radius * shape.radius * shape.line;

	printf("The shape's line(height) is %.1f.\n", shape.line);
	printf("The shape's radius is %.1f.\n", shape.radius);
	printf("The shape's circles's area are %.1f.\n", shape.areacircle);
	printf("The shape's area is %.1f.\n", shape.areacylinder);
	printf("The shape's volume is %.1f.\n", shape.volume);

	return(0);
}