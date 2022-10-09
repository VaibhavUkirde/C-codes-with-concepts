//Binary to decimal conversion

#include <stdio.h>
int main()
{
 int decimal=0, base=1, binary, num, rem;
 printf("Enter the binary number");
 scanf("%d", &binary);
 num=binary;
 while (binary!=0)
 {
  rem = binary % 10;
  decimal = decimal + rem*base;
  binary = binary/10;
  base = base*2;
 }
 printf("Decimal equivalent of binary number %d is:%d", num, decimal);
 return 0;
}