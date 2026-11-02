#include <stdio.h>
#include <string.h>
struct stud {
    int id;
    char name[50];
    float cgpa;
};
int main() { 
    struct stud s1;  
    s1.id = 11259419;
    strcpy(s1.name, "Bharadwaj"); 
    s1.cgpa = 7.83;    
    printf("Student ID: %d\n", s1.id);
    printf("Student Name: %s\n", s1.name);
    printf("Student CGPA: %.2f\n", s1.cgpa);
    return 0;
}