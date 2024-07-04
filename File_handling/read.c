#include<stdio.h>
int main()
{
    float n;
    //File pointer
    FILE *fptr;

    fptr=fopen("float_value.txt", "r");

    if(fptr==NULL)
    {
        printf("Unable to write. Writing Error!\n");
        return -1;
    }

    fscanf(fptr,"%f",&n);

    float result=n*2;

    printf("Double of value present in file is :%.2f\n",result);
    fclose(fptr);
    return 0;
}