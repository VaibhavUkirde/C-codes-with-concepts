//Non tail recursion

#include <stdio.h>
int fun(int n)
{
 if (n == 0)
  return 0;
 else
  return 1 + fun(n/2);
}
int main()
{
 printf("%d", fun(10));
 return 0;
}