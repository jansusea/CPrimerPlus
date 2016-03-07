//demo7.c calculate cube
#include<stdio.h>
void calCube(float a);
int main(void){
	float a;
	printf("Please input a float number:\n");
	scanf("%f",&a);
	calCube(a);
	return 0;
}
void calCube(float a){
	float cube = a * a * a;
	printf("The %.1f input's cube is %.1f!\n",a,cube);
}
	
