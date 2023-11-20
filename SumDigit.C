#include<stdio.h>
int SumDigit(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    SumDigit(x);
    printf("%d",SumDigit(x));
    return 0;
}
int SumDigit(int n)
{
    if(n==0)
        return 0;
    return (n%10)+SumDigit(n/10);
}
