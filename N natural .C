#include<stdio.h>
int Nsum(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    Nsum(x);
    printf("Sum is %d",Nsum(x));
    return 0;
}
int Nsum(int n)
{
    if(n==0)
        return 0;
    return n+Nsum(n-1);
}

