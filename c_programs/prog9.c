#include<stdio.h>
int main()
{
    int var = 4/9;
    float var1 = 4/9;   //output equals to 0 because 4/9 is interger value not a floating value
    float var2 = 4.0/9.0;
    

    printf("%d\n",var);
    printf("%.2f\n",var1);
    printf("%.2f\n",var2);
    
    }