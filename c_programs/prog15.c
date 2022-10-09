#include<stdio.h>
#define add(x,y) x+y
int main()
{
    printf("result of expression a*b+c is %d", 5 * add(4,3));
    return 0;
}
//result is 23 not 35 because 5*4+3 is the equation