//demo4.c centimeters convert to feet and inches.&centi , double %lf
#include<stdio.h>
int main(void){
	double centi;
	printf("Enter a height in centimeters:");
	scanf("%lf",&centi);
	const double fcFeetRate = 30.5;
	const int icF2IRate = 12;	
	int feet;
	float inches;
	while(centi > 0){
		feet = (int)(centi / fcFeetRate);
		inches = (centi / fcFeetRate - feet) * icF2IRate; 
		printf("%3.1lf cm = %d feet,%3.1lf inches\n",centi,feet,inches);
		printf("Enter a height in centimeters (<0 to quit):");
		scanf("%lf",&centi);
	}
	printf("bye\n");
	return 0;
}
