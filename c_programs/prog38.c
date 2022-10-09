//fibonacci series upto n terms:

#include <stdio.h>
int main()
{
 int n, a, b, i, result;
 printf("Enter the number of terms: ");
 scanf("%d", &n);
 a=0;
 b=1;
 for (i=1; i<=n; i++)   // i is simply for 1 to n, where n is the number of terms
 {
  printf("%d  ", a);
  result = a+b;
  a=b;
  b=result;
 }
}