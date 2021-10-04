#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1;
    int num2;
    printf("enter first number: ");
    scanf("%d", &num1);
    printf("enter second number: ");
    scanf("%d", &num2);

    printf("answer: %d", num1 + num2);

    return 0;
}