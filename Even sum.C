#include<stdio.h>
int EvenSum(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    EvenSum(x);
    printf("sum of Even number is=%d",EvenSum(x));
    return 0;
}
int EvenSum(int n)
{
    if(n==1)
        return 2;
    return (2*n)+EvenSum(n-1);
}
