#include<stdio.h>
#include<math.h>

int main(){
    long maxNum=1000000000000;
    long i,j,k,l;    
    j=1;
    long z;
    int count=0;
    long a;
    for (a=1;a*a<=maxNum;a++);

    for (i=a;i>j;i--)//for each number less than half of max
    {
        for(k=j;(l=(k*i))<=maxNum;k++)
        {
            if (l==maxNum){
                printf("found %ld,%ld\n",k,i);
                j++;
            }
        }
    }
    printf("\n%i\n", count);
    return 0;
}
