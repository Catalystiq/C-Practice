#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[], int age) {
    printf("Hello %s, you are %d\n", name, age);
}

int maximum(int num1, int num2, int num3) {
    int result;

    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }

    return result;
}

double cube(double num);

int main() {
    sayHi("Mike", 40);
    sayHi("Tom", 23);
    sayHi("Oscar", 70);
    printf("\n");
    printf("Answer: %f", cube(7.0));
    printf("\n");
    printf("%d", maximum(1, 2, 3));
    printf("\n");
    if (!(3 < 2)) {
        printf("True");
    }
}

double cube(double num) {
    return num * num * num;
}