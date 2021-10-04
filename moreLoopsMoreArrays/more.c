#include <stdio.h>
#include <stdlib.h>
#define length(x) (sizeof(x) / sizeof((x)[0]))

int main() {

    int nums[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}};

    // printf("%d\n", nums[1][1]);

    for (int i = 0; i < length(nums); i++) {
        for (int j = 0; j < length(nums[3]); j++) {
            printf("%d, ", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}