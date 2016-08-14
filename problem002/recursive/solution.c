#include<stdio.h>
#include<stdlib.h>

int getEvenPrimeSum(int limit){
	return getEvenPrimeSumHelper(1, 2, limit, 2);
}

int getEvenPrimeSumHelper(int twoAgo, int oneAgo, int limit, int sum){
	int tempSum = oneAgo+twoAgo;
	if (tempSum < limit)
		return getEvenPrimeSumHelper(oneAgo, tempSum, limit, tempSum%2?sum:(tempSum+sum));
	return sum;
}

void main(int argc, char** argv){ 
	if (argc == 2){ 
		int arg = atoi(argv[1]);
		printf("Sum of even primes up to %d: %d\n", arg, getEvenPrimeSum(arg));
	}
	return;
}
