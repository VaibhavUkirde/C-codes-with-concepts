//counting the number of elements in array

#include <stdio.h>
int main()
{
 int a[]= {1, 15, 52, 36, 85, 65, 160, 356, 12, 645, 310, 659, 999, 462, 030, 120, 1221, 3265, 6626, 660, 331, 3310, 30, 1, 3, 32, 2, 5, 5, 8, 7, 9, 44, 123};
 printf("%d", sizeof(a)/sizeof(a[0]));
 return 0;
}