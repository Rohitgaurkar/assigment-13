#include <stdio.h>
#include <math.h>

int powRec(int x,int y)
{
  if(y==0)
    return 1;
  return x*powRec(x,y-1);
}
int main()
{
  int x = 2,y=3;
  printf("The number %d to the power %d is %d",x,y,powRec(x,y));
}

