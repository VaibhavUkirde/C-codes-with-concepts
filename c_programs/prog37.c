//addition of two numbers

#include <stdio.h>
int main()
{
 int x, y;
 printf("Enter the numbers\n");
 scanf("%d\n%d", &x, &y);
 if (y>0)
 {
  while (y != 0)
  {
   x++;
   y--;
  }
 }
 else if (y<=0)
 {
  while (y != 0)
  {
   x--;
   y++;
  }
 }
 printf("The sum of two numbers is: %d", x);
 return 0;
}