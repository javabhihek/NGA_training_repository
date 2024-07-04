#include <stdio.h>
#define ELEM_FOUND 1
#define ELEM_NOT_FOUND 0
// Function prototype
int linearSearch(int arr[], int n, int searchElem);
int main()
{
    // Array
    int myArray[] = {6, 3, 15, -1, 0, 21, 4, 3, 9, 21}, searchElem, flag, n;
    // Calculate the size of the array
    n = sizeof(myArray) / sizeof(myArray[0]);
    printf("Enter the element to search:");
    scanf("%d", &searchElem);
    flag = linearSearch(myArray, n, searchElem);
    flag ? printf("Element found.\n") : printf("Element not found.\n");
    return 0;
}
// Function definitition
int linearSearch(int arr[], int n, int searchElem)
{
    // Assume initially element is not existing in the given array, this is indicated by flag = 0,
    //if element is found then flag becomes = 1.
    int flag = ELEM_NOT_FOUND;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == searchElem)
        {
            // Search elem. found, set the flag = true, and break
            flag = ELEM_FOUND;
            break;
        }
    }
    return flag;
}