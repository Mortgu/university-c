#include <stdio.h>
#include <stdlib.h>

#include "File.h"

int print_file(char *filename) {
    FILE *filePointer;
    filePointer = fopen(filename, "r");

    if (filePointer == NULL) return 1;

    char line[100];
    while (fgets(line, 100, filePointer)) {
        printf("%s", line);
    }

    fclose(filePointer);
    return 0;
}

int main(int argc, char **arguments) {
    if (argc != 2) {
        fprintf(stderr, "Dateiname fehlt\n");
        return 1;
    }
    int error = print_file(arguments[1]);

    return error;
}