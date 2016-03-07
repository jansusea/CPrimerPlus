// demo8.c input Fahrenheit trans to Celsius and Kelvin
#include<stdio.h>
void Temperatures(double fahr);
int main(void){
	double inputFahr;
	printf("Please input the fahr:");
	while(scanf("%lf",&inputFahr) == 1){
		Temperatures(inputFahr);
	}
}
void Temperatures(double fahr){
	const float celRate = 1.8;
	const float celPlus = 32.0;
	const float kelPlus = 273.16;
	double Celsius = celRate * fahr + celPlus;
	double Kelvin = Celsius + kelPlus;
	printf("The calculate Celsius is %.2lf and Kelvin is %.2lf\n",Celsius,
		Kelvin);
}	

