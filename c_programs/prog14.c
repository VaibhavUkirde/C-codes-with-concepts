#include<stdio.h>
#define greater(x, y) if(x > y)\
printf("%d is greater than %d", x , y); \
else \
printf("%d is lesser than %d", x , y);
int main()
{
 greater(8, 52);
    return 0;
}