//Initializing string variables

#include <stdio.h>
int main()
{
 char s[6] = "Hello";
 char t[6];
 int i;
 for (i=0; s[i] != '\0'; i++)
 {
  t[i] = s[i];   //for i = 1 to 5 
 }
 t[i] = '\0';  //null character is added at i=6
 printf("%s", t);
 return 0;
}