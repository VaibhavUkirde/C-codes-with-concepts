//printing the elements of 2D array

#include <stdio.h>
int main()
{
 int a[3][2] = {2, 1, 4, 3, 6, 5};
 int i, j;
 
 for (i=0; i<3; i++)
 {
  for (j=0; j<2; j++)
   printf("%d ", a[i][j]);
 }
 return 0;
}