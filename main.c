#include <stdio.h>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Please enter file name.");
        return 0;
    }

    FILE *ptr;
    ptr = fopen(argv[1], "r");

    char myString[100];
    while(fgets(myString, 100, ptr)) {
        printf("%s", myString);
    }

    fclose(ptr);
    return 0;
}