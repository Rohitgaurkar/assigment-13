#include<stdio.h>
int hcf(int, int);
int main()
{
    int a=248, b=492,c, result;
    if(a>b)
        result=hcf(b,a%b);
      c=a;
      a=b;
      b=c;
      result=hcf(b,a%b);

    printf("%d", result);
    return 0;


}
int hcf(int a, int b)
{
    if(b==0)
         return a;
         hcf(b,a%b);


}
