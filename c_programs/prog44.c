#include <stdio.h>
int add(int, int);
int main()


{
 int a=500, b=300, sum;
 sum = add(a, b); 
 printf("sum is %d", sum);
 return 0;
}
 
int add(int m, int n)
{
  return (m+n);
}