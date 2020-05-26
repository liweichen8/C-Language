#include <stdio.h>

int

main(void){

	int n, i, num, org, sum;

	FILE *in;

	in = fopen("sample.txt","r");

	for (n=1; n<=3; n++)
	{
		fscanf(in, "%d", &num);

		sum = 0;
		for (i=1; i<=num; i++)
		{
			fscanf(in, "%d", &org);
			printf("The sample is: %d\n", org);
			sum = sum + org;
		}	
		printf("The sum is %d\n", sum);
	}
	fclose(in);


	return(0);
}