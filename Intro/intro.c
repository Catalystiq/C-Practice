#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    //hello world
    printf("hello world! \n");
    //drawing a shape
    printf("\n");
    printf("   /|\n");
    printf("  / |\n");
    printf(" /  |\n");
    printf("/___|\n");
    printf("\n");

    //variable and using them in strings
    char myName[] = "james";
    int myAge = 15;
    printf("my name is %s \n", myName);
    printf("my age is %d \n", myAge);

    //data types
    int num = 100;
    double pi = 3.141592;
    char goodGrade[] = "a+";
    printf("\n");

    //printf
    printf("pritning a %s... %d \nand a floating point number... %f", "number", num, pi);
    printf("\n");
    int num1 = 6 + 5;
    printf("%d", num1);
    printf("\n");
    printf("%f", pow(4, 3));
    printf("\n");
    printf("%f", sqrt(36));
    printf("\n");
    printf("%f", ceil(36.98173));
    printf("\n");
    printf("%f", floor(36.98173));

    //comments
    /*
        prinf("this is commented out");
    */

    //constants
    //optional: differientiate constants from other variables with uppercasing
    printf("\n");
    const int num2 = 5;
    printf("%d", num2);
    printf("\n");

    //line user input
    //fgets gets a line of user input up to a limit of characters | stdin is like the console or system that fgets will prompt to
    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    // scanf("%s", name);
    printf("Your name is %s", name);

    //user input
    //%d for digits for printf and scanf | %f for doubles/floats for printf | %lf for doubles/floats for scanf | %s for multiple chars | %c for single char
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is: %d", age);
    printf("\n");

    return 0;
}