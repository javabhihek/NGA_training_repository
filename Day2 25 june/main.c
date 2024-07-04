// Main function
#include<stdio.h>
#include "math.h"
int main()
{
    int a=2,b=3;

    int sum_r = sum(a,b);
    int product_r = product(a,b);
    printf("Sum=%d\n",sum_r);
    printf("Product=%d",product_r);
    return 0;
}