#include <stdio.h>
int main()
{
 int a;
 printf("Enter a number\n");
 scanf("%d", &a);
 while (a != 0)
 {
  if (a < 0)
  break;
  printf("Enter a number\n");
  scanf("%d", &a);
 }
}
  