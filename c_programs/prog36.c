//addition of the two numbers without using + :

#include <stdio.h>
int main()
{
 int x, y;
 printf("Enter the two numbers\n");
 scanf("%d\n%d", &x, &y);
 while (y != 0)
 {
  x++;
  y--;
 }
 printf("The addition of two numbers is:%d", x);
 return 0;
}