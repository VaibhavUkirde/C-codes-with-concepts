//sum of elements of array

#include <stdio.h>
int main()
{
 int a[] = {11, 22, 36, 10, 55, 7, 10};
 int *p, sum=0;
 for (p = &a[0]; p <= &a[6]; p++)
  sum += *p;
 printf("Sum is %d", sum);
}