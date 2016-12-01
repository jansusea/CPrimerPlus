/**
this is test for pointer
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int add(int *,int,int *,int);
int main(void){
	int c[] = {1,2,3,4,5};
	int *x = c;

	// int o[5] = {0};
	// int *outData = (int*)malloc(sizeof(int));

	int *outData;

	int ret = add(x,5,outData,5);


	printf("%d\n", *outData);
	
}
int add(int *inData,int inLen,int *outData,int outLen){
	if (outData == NULL){
		printf("ee\n");
	}

	*inData = *inData + 1;

	outData = inData;
	printf("%d\n", *outData);
	return 0;
}