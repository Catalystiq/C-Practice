#include <stdio.h>
#include <stdlib.h>

int main() {

    //pointers are memory addresses!!!
    int age = 30;
    int *pAge = &age;
    double gpa = 3.4;
    double *pGpa = &gpa;
    char grade = 'A';
    char *pGrade = &grade;

    //%p to access pointers
    printf("age's memory address: %p\n", &age);
    printf("\n");
    //dereferencing a pointer
    printf("%d\n", *pAge);
    //or
    printf("%d", *&age);

    return 0;
}