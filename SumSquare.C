#include<stdio.h>
int SquareSum(int);

int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    SquareSum(x);
    printf("%d",SquareSum(x));
    return 0;

}
int SquareSum(int n)
{
    if(n==1)
        return 1;
    return n*n+SquareSum(n-1);
}

