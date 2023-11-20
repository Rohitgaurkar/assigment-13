#include<stdio.h>
int PrintFib(int);
int main()
{
    int x,i;
    printf("Enter a number:");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
         printf("%d ",PrintFib(i));
    }
    return 0;
}
int PrintFib(int n)
{
    if(n==0||n==1)
    return n;
    return PrintFib(n-1)+PrintFib(n-2);
}
