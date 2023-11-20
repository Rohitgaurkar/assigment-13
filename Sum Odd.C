#include<stdio.h>
int OddSum(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    OddSum(x);
    printf("sum of Odd number is=%d",OddSum(x));
    return 0;
}
int OddSum(int n)
{
    if(n==1)
        return 1;
    return (2*n-1)+OddSum(n-1);
}

