#include<stdio.h>

int main(){
    long maxNum=1000000000000;
    long i;    
    int count=0;
    for (i=1;i<=maxNum/2;i++)//replace with a progressive multiple check
    {
        if (maxNum%i==0){
            printf("found %ld\n", i);
            count++;
        }
    }
    printf("\n%i\n", count);
    return 0;
}
