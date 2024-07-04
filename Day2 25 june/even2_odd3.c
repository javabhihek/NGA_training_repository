#include<stdio.h>
#include<math.h>
int main()
{
    int num,z;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num%2==0)
        z=pow(num,2);
    else
        z=pow(num,3);

    printf("Result =%d",z);
    return 0;
}