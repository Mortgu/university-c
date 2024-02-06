#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void on_enable() {
    char input[100];
    int* array = (int *) calloc(5, sizeof(int));

    if (!array) {
        printf("Can't initialize array! Failed to allocate memory!");
        return;
    }

    while (strcmp("exit", input) != 0) {
        scanf("%s", input);

        if (atoi(input) != 0) {
            *(array+ sizeof(array) + 1) = atoi(input);
        }
    }

    for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
        printf("%d ", array[i]);
    }
}