//demo5.c calculate integer number sum from 0 to input number.
#include<stdio.h>
int main(void){
	int a;
	int sum = 0;
	int input;
	printf("Input integer number:\n");
	while(scanf("%d",&a) == 1){
		if(a < 0){
			break;
		}else{
			input = a;
			while( a > 0){
				sum = a + sum;
				a--;
			}
		}
		printf("The %d input integer,sum is %d.\n",input,sum);
		sum = 0;
	}
}	
