#include <stdio.h>
#include <stdlib.h>

int main() {
    //w to write (override as well) and a to append and r to read
    char line[255];
    FILE *fpointer = fopen("./employees.txt", "r");

    //first line of file
    fgets(line, 255, fpointer);
    //second line of file etc...
    fgets(line, 255, fpointer);
    printf("%s", line);

    // fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");
    // fprintf(fpointer, "\nKelly, Customer Service");

    fclose(fpointer);

    return 0;
}