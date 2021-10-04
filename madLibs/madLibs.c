#include <stdio.h>
#include <stdlib.h>

int main() {
    char color[20];
    char pluralNoun[20];
    char fname[20];
    char lname[20];

    printf("enter a color: ");
    scanf("%s", color);
    printf("enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("enter a celebrity: ");
    scanf("%s%s", fname, lname);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", fname, lname);

    return 0;
}