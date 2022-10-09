#include<stdio.h>
int main()
{
    unsigned i=1;
    int j=-4;
    printf("%u\n", i+j);  //if we use %d instead of %u, then output will be -3, instead of 4294967293
    return 0;
}