#include <stdio.h>
#include <stdlib.h>

int main() {
    int nums[] = {4, 8, 15, 16, 23, 42};
    nums[1] = 200;
    printf("%d\n", nums[1]);

    int numbers[10];
    numbers[0] = 80;
    printf("%d\n", numbers[0]);

    char phrase[20] = "hello world";
    return 0;
}