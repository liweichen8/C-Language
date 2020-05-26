// Classic.C.Program.2.JP  Web Note 1.0.2
//  "Another Simple C Program

#include <stdio.h>
main()
{
	int x, y, z;
	int result;
	
	scanf("%d", &x);		// VERY BAD - no  prompt
	scanf("%d %d", &y, &z);
	
	result = x + y + z;
	
	printf("The answer is %d \n", result);
}
