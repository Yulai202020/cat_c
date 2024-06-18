#include <stdio.h>

int main(int argc, char* argv[]) {

    if (argc < 2) {
        while (1) {
            char string[1024];
            fgets(string, 1024, stdin);
            printf(string);
        }
    } else {
        for (int i = 1; i < argc; i++) {
            FILE *ptr;
            char* filename = argv[i];
            ptr = fopen(filename, "r");
            
            char buffer[1024];
            while(fgets(buffer, 1024, ptr)) {
                printf("%s", buffer);
            }

            fclose(ptr);
        }
    }

    return 0;
}