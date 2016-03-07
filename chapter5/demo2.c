//demo2.c print integer,input 5,print 5-6-7-8-...
#include<stdio.h>
int main(void){
	int a;
	printf("Please input a integer(it will be exit if isn't number.):");
	while(scanf("%d",&a) == 1){
		int b = a + 11;
		while( a < b){
			printf("%d\n",a);
			a++;
		}		

	}
	return 0;
}
