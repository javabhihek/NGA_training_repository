#include<stdio.h>
//creating function for sum
int cal_sum(int n1, int n2)
{
    return n1+n2;
    
}
//creating function for product
int cal_product(int n1, int n2)
{
    return n1*n2;
   
}

int main() {
    int n1, n2;
    int sum, product;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);

    // Calculate sum and product using the functions
    sum = cal_sum(n1, n2);
    product = cal_product(n1, n2);

    // Display the results
    printf("The sum of %d and %d is: %d\n", n1, n2, sum);
    printf("The product of %d and %d is: %d\n", n1, n2, product);

    return 0;
}