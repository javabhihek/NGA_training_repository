#include <stdio.h>
#include <stdlib.h>

int main() 
{
    
    int *intP = (int *)malloc(sizeof(int));
    float *floatP = (float *)malloc(sizeof(float));
    char *charP = (char *)malloc(sizeof(char));
    double *doubleP = (double *)malloc(sizeof(double));



    if (intP == NULL || floatP == NULL || charP == NULL || doubleP == NULL)
    {
        printf("Memory not allocated!\n");
        return 1;
    }



  
    *intP = 10;
    *floatP = 5.5;
    *charP = 'A';
    *doubleP = 12.34;



  
    *intP*= 2;
    *floatP *= 2;
    *charP *= 2; // 'A' (65) * 2 = 130 --> non-printable character
    *doubleP *= 2;



  
    printf("Doubled integer value: %d\n", *intP);
    printf("Doubled float value: %.2f\n", *floatP);
    printf("Doubled char value: %d (ASCII code)\n", *charP); 
    printf("Doubled double value: %.2lf\n", *doubleP);



    // here we free allocated memory
    free(intP);
    free(floatP);
    free(charP);
    free(doubleP);



    return 0;
}
