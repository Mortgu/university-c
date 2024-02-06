#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#include "StructArrays.h"

//#define DEBUG

#define BUFFER_SIZE 4096

typedef struct Semester {
    char name[16];
    char weekday[16];
    struct tm calendar;
    int grade;
    struct Semester *next;
} Semester;

typedef void (*FunctionCallback)(char *);

typedef struct Functions {
    char name[50];
    FunctionCallback functionCallback;
} Functions;

Functions functions[] = {
        {"add",    &add_element},
        {"remove", &remove_element}
};

int main(int argc, char *argv[]) {
    char input[100];

    while (fgets(input, sizeof(input), stdin)) {
        char *command = getArg(input, 0);
        char **arguments = getArgs(input);

        // Removes \n from the end of the command to match strlen
        command[strcspn(command, "\n")] = 0;

        for (int i = 0; i < sizeof(functions) / sizeof(functions[0]); i++) {
            if (strcmp(functions[i].name, command) == 0) {
                functions[i].functionCallback(getArg(input, 1));
                break;
            }
        }
    }

    return EXIT_SUCCESS;
}

void add_element(char *argument) {
    if (argument == NULL) {
        printf("Usage: add <arguments>\n");
        return;
    }

    printf("add_element! Arguments: %s", argument);
}

void remove_element(char *argument) {
    if (argument == NULL) {
        printf("No arguments passed!\n");
        return;
    }

    printf("remove_element! Arguments: %s", argument);
}

char *getArg(char inputString[], int index) {
    char *token;
    char *copy = (char *) malloc(strlen(inputString) + 1);

    if (copy == NULL) {
        printf("Error allocating memory for string copy!");
    }

    strcpy(copy, inputString);
    token = strtok(copy, " ");

    char *argument = NULL;

    int i = 0;
    while (copy != NULL) {
        if (index == i)
            argument = copy;

        copy = strtok(NULL, " ");

        i++;
    }
    free(copy);
    copy = NULL;

    return argument;
}

char **getArgs(char inputString[]) {
    char *copy = (char *) malloc(strlen(inputString) + 1);

    if (copy == NULL) {
        printf("Failed to allocate memory for copy!");
        return NULL;
    }

    // COPY INPUT_STRING TO COPY
    strcpy(copy, inputString);

    return NULL;
}