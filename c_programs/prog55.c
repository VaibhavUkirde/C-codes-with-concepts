//PRINTING THE ELEMENTS OF 3D ARRAY

#include <stdio.h>
int main()
{
 int a[2][2][3] = {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1}; 
 int i, j, k;
 for (i=0; i<2; i++)
  {
   for (j=0; j<2; j++)
    {
     for (k=0; k<3; k++)
      {
       printf("%d ", a[i][j][k]);
      }
    }
  }
 return 0;
}