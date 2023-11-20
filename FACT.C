#include<stdio.h>
int fact(int);
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    fact(x);
    printf("%d",fact(x));
    return 0;
}
int fact(int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1);
}
