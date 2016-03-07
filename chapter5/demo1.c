//demo1.c The chapter 5 first test
#include <stdio.h>
#define RATE 60;
int main(void){
	int minutes,hour,minute;
	printf("Please input your time(minutes):");
	scanf("%d",&minutes);
	while(minutes > 0){
	hour = minutes / RATE;
	minute = minutes % RATE;
	printf("The format time is %d hour,%d minutes.\n",hour,minute);
	printf("Please input continue.(it will exit if input number lower than 0 )\n");
	scanf("%d",&minutes);
	}
	return 0;
}
