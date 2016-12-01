/**
this is program for compute time.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void foo();
void compuSysTime();
void compuClockTime();
void compuApiTime();
void compuGetTime();
void compu4();
void test7();

struct timeval{
	long tv_sec;
	long tv_usec;
};

struct timezone{
	int tz_minuteswest;
	int tz_dsttime;
};

int main(void)
{
	compuSysTime();
	compuClockTime();
//	compuApiTime();
	test7();
	system("pause");
}

void compuSysTime()
{
	time_t start,stop;
	start = time(NULL);
	foo();
	stop = time(NULL);
	printf("Use Time:%ld\n",(stop - start));
}

void compuClockTime()
{
	double dur;
	clock_t start,end;
	start = clock();
	foo();
	end = clock();
	dur = (double)(end - start);
	printf("Use Time:%f\n",(dur/CLOCKS_PER_SEC));
}

void test7()
{
	struct timeval t1,t2;
	double timeuse;
	gettimeofday(&t1,NULL);
	foo();
	gettimeofday(&t2,NULL);
	timeuse = t2.tv_sec - t1.tv_sec + (t2.tv_usec - t1.tv_usec) / 1000000.0;
	printf("Use Time :%f\n",timeuse);
}



