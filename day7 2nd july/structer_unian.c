#include <stdio.h>
#include<string.h>

// Define a structure named person
struct personStruct {
    char name[50];
    int aadhaarCard;
    float salary;
    char gender;
};

// Define a union named person
union personUnion {
    char name[50];
    int aadhaarCard;
    float salary;
    char gender;
};

int main() {
    // Declare and initialize a structure variable
    struct personStruct person1 = {"John Doe", 123456789, 50000.0, 'M'};
    
    // Declare a union variable
    union personUnion person2;

    // Demonstrate structure usage
    printf("Structure person details:\n");
    printf("Name: %s\n", person1.name);
    printf("Aadhaar Card: %d\n", person1.aadhaarCard);
    printf("Salary: %.2f\n", person1.salary);
    printf("Gender: %c\n", person1.gender);

    // Demonstrate union usage
    // Only one member can be used at a time in union
    printf("\nUnion person details:\n");
    strcpy(person2.name, "Jane Doe");
    printf("Name: %s\n", person2.name);
    
    person2.aadhaarCard = 987654321;
    printf("Aadhaar Card: %d\n", person2.aadhaarCard);  // Name data is now overwritten
    
    person2.salary = 60000.0;
    printf("Salary: %.2f\n", person2.salary);  // Aadhaar Card data is now overwritten
    
    person2.gender = 'F';
    printf("Gender: %c\n", person2.gender);  // Salary data is now overwritten

    return 0;
}
