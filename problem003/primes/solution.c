#include<stdio.h>
#include<stdlib.h>

int isPrime(long number);

int main(int argc, char** argv)
{
    long maxNum=0;
    if(argc!=2){
        printf("Please supply a max number as a parameter\n");
        return 1;
    }
    else
    {
        maxNum = atol(argv[1]);
    }

    //long* primearray = NULL;

    //initializePrimes(primearray, maxNum);
    printf("Primes initialized\n");

    long* array = malloc(100*sizeof(long));
    int arrayIndex = 0;
    long i;
    for (i=1;i<=maxNum/2;i++)//replace with a progressive multiple check
    {
        if (maxNum%i==0)
        {
            printf("Output: %li\n", i);
            if (isPrime(i))
            {
                array[arrayIndex] = i;
                arrayIndex++;
                printf("Output: %i\n", i);
            }
        }
    }
    for (i=0;i<arrayIndex;i++)
    {
        printf("%i, ",array[i]);
    }
    
}

int isPrime(long number)
{
    int factorCount = 0;
    int i;
    for (i=1;i<=(number/2);i++)
    {
        if (number%i==0)
        {
            factorCount++;
            if (factorCount>2)
            {
                return 0;
            }
        }
    }
    return 1;
}
