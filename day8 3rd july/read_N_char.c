#include<stdio.h>

void ReadNChar(int n)
{
    FILE *alfa;
    char ch;
    int c=0;
    //we have to create a text file with name abhishek.txt and
    //write some srting value in that to read here.
    alfa=fopen("abhishek.txt","r");
    if(alfa==NULL)
    {
        printf("Error!, File not opening.\n");
        return;
    }
    //Read & display characters one by one
    while(c<n&&(ch=fgetc(alfa))!=EOF)
    {
        putchar(ch);
        c++;
    }
    //close all files
    fclose(alfa);
}

int main()
{
    int n;

    printf("Enter the number of character to read: ");
    scanf("%d",&n);

    ReadNChar(n);
    return 0;
}