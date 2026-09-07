#include <stdio.h>

typedef struct {    //Define the struct
    char name[50];
    int age;
    float gpa;
} student_t;

student_t get_student(); //function name get_student and returns a value of type student_t

int main() {
    student_t s;

    s = get_student(); //call the function

    printf("Student Name: %s, Age: %d, GPA: %.1f\n", s.name, s.age, s.gpa);

    return 0;
}

student_t get_student() {
    student_t s;
    //get the inputs
    printf("Enter the name: ");
    scanf("%49s", s.name);

    printf("Enter the age: ");
    scanf("%d", &s.age);

    printf("Enter the GPA: ");
    scanf("%f", &s.gpa);

    return s;
}
