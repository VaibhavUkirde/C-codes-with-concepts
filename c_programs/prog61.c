//reverse a series of numbers using pointers

#include <stdio.h>
#define N 5

int main()
{
 int a[N], *p;
 printf("Enter 5 elements in the array:");
 for (p = a; p <= a+N-1; p++)
  scanf("%d", p);
 printf("Elements in reverse order:\n");
 for (p = a+N-1; p >= a; p--)
  printf("%d ", *p);
 return 0;
}