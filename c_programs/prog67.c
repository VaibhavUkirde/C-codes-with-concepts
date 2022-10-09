#include <stdio.h>
int main()
{
 char ch;        //we can write  int ch instead of char ch
 for (ch = 'A'; ch <= 'Z'; ch++)
   putchar(ch);  //we can also write, printf("%c ", ch);
 return 0;
}