//demo3.c convert day to week and days
#include<stdio.h>
int main(void){
	int a;
	printf("Input days:\n");
	while(scanf("%d",&a)==1){
		if(a <= 0 ){
			printf("input invalid!\n");
			break;
		}else{
			int week,day;
			week = a / 7;
			day = a % 7;
			printf("%d days are %d weeks,%d days.\n",a,week,day);
		}
	}
}
