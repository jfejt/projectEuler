#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double sumUpTo(double interval, double limit){
	double avg, count, sum, lowerLimit;
	count = limit/interval;
	count = trunc(count);
	lowerLimit = count*interval;
	avg = (interval+lowerLimit)/2;
	sum = avg*count;
	if(!(fmod(limit,interval)))
		sum-=limit;
	return sum;
}

void main(int argc, char** argv){
	if (argc==3){
		double interval = atof(argv[1]);
		double limit = atof(argv[2]);
		double sum = sumUpTo(interval,limit);
		printf("Output: %f\n", sum);
	}
	if (argc==4){
		double interval1 = atof(argv[1]);
		double interval2 = atof(argv[2]);
		double limit2 = atof(argv[3]);
		double sum1 = sumUpTo(interval1,limit2);
		double sum2 = sumUpTo(interval2,limit2);
		double commonSum = sumUpTo(interval1*interval2,limit2);
		double finalSum = sum1+sum2-commonSum;
		printf("Output: %f\n", finalSum);
	}
	return;
}
