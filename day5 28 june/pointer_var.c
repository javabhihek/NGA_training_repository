#include <stdio.h>

int main() {
    
    int n;
    int *ptr;
    ptr=&n;
    printf("Enter a number :");
    scanf("%d",&n);
    
    printf("You have entered :%d\n",*ptr);

    return 0;
}