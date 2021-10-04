#include <stdio.h>
#include <stdlib.h>
#define length(x) (sizeof(x) / sizeof((x)[0]))

int main() {
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};

    for (int i = 0; i < length(luckyNumbers); i++) {
        printf("%d\n", luckyNumbers[i]);
    }

    return 0;
}