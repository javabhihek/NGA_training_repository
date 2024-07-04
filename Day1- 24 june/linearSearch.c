/*
   Algorithm for Assignment 1:
   which is linear search
   arr[]={23,56,67,78}
   input searching value=key
   start for loop i=0 to 3 (as per the given array), incerement i by 1
   check if arr[i]==key then
   index value i will store in r (i-->index value, r-->result)
   close if condition 
   close for loop
   check if r not equals to -1 then
   display Element found
   else
   display Element not found
   close if condition 
   End

*/

#include<stdio.h>
int main()
{
    int arr[]={23,56,67,78};
    int key,i,r;//key-->serching value, i-->loop variable, rr-->stroing the result
    printf("Enter a searching value :");
    scanf("%d",&key);//here i have taken a searching element from user

    for(i=0; i<4; i++)
    {
        if(arr[i]==key)//here we compair search value with array index value
        {
            r=i;//if value will match then it will store to r
        }
    }
    if(r!=-1)
        printf("Element found at index %d",r);
    else
        printf("Element not found");

    return 0;
}