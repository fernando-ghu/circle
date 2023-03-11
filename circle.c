// circle.c Calculates and prints the area of a circle
#include <stdio.h>

double circularArea( double );

int main()
{
	double radius = 1.0, area = 0;

	printf("\tArea of Circles\n\n");
	printf("radius\t\t\tarea\n");
	printf("-------------------------------\n");

	area = circularArea( radius );
	printf("%10.1f\t%10.2f\n",radius,area);

	radius = 5;
	area = circularArea( radius );

	printf("%10.1f\t%10.2f\n",radius,area);

	return 0;
}
