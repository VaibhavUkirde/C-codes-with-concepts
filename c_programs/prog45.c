//Direct recursion program

#include<stdio.h>
int fact(int n)
{
 if (n == 1)
  return 1;
 else
  return n*fact(n-1);
}
int main()
{
 int n;
 printf("Enter the number:");
 scanf("%d", &n);
 printf("The factorial of %d is %d", n, fact(n));
}