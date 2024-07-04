#include<stdio.h>
int main()
{
    float n;
    //File pointer
    FILE *fptr;

    fptr=fopen("float_value.txt", "w");

    if(fptr==NULL)
    {
        printf("Unable to write. Writing Error!\n");
        return -1;
    }

    printf("Enter a value to write:");
    scanf("%f",&n);

    fprintf(fptr,"%2f",n);
    fclose(fptr);
    return 0;
}