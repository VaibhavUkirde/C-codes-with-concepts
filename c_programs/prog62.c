//addition of elements by passing array name as an argument to a function

#include <stdio.h>
int add(int b[], int len)
{
 int sum=0, i;
 for(i=0; i<len; i++)
  sum += b[i];
 return sum;
}
int main()
{
 int a[]= {10, 20, 30, 40};
 int len = sizeof(a)/sizeof(a[0]);
 printf("%d", add(a, len));
 return 0;
}