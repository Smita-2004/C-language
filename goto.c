#include<stdio.h>
int main()
{
  int n=10;
  S:
  printf("%d ",n);
  n=n+1;
  if(n<20)
  goto S;

   return 0;
}
