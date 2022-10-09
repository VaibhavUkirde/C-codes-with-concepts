#include <stdio.h>
int main()
{
 int number, i, rem, sum=0;
 printf("Enter the number\n");
 scanf("%d", &number);
 for (i=1; i<number; i++)
 {
  rem = number%i;
  if (rem==0)
  {
   sum = sum + i;
  }
 }
 if (sum==number)
  printf("%d is a perfect number", number);
 else
  printf("%d is not a perfect number", number);
 return 0;
}