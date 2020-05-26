#include <stdio.h>
#include <string.h>

int

main(void)
{

	typedef struct STUDENT {
		char last_name [ 25 ] ; 
		int age ;
		double course_fee [ 7 ] ; 
	} student_type ;

	student_type student ; /* only one student in the university */
	int i ;

	strcpy( student.last_name , "Squib" );
	printf("Enter the fee: ");
	scanf( "%lf", &student.course_fee [ 3 ] ); /* input fee for fourth course */

	for( i = 0 ; i < 7 ; i++ )
	student.course_fee[ i ] = 495.95;
	
	for( i = 0 ; i < 7 ; i++ )
	printf( " $%-10.2lf \n", student.course_fee[ i ] ) ; 

	return(0);
}