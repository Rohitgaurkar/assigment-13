#include <stdio.h>
int countdigit(int);
int main()
{
    int x=123098;
    countdigit(x);
    printf("Total digit of given number %d is %d",x, countdigit(x));
    return 0;
}
int countdigit(int n)
{
    if(n==0)
    return 0;
    return 1+countdigit(n/10);
}
