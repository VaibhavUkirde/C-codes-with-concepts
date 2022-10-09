//to check whether any of the digits in a number appears more than once

#include <stdio.h>
int main()
{
 int seen[10]={0};
 int N;
 int rem;

 printf("Enter the number:");
 scanf("%d", &N);

 while (N>0)
 {
  rem = N%10;
  if (seen[rem] == 1)
   break;
  seen [rem] = 1;
  N = N/10;
 }

 if (N>0)
 {
  printf("Yes");
 }
 else
 {
  printf("No");
 }
 return 0;
}
 