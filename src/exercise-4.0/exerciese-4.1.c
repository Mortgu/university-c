#include <stdio.h>
#include <stdlib.h>

char *action(int input) {
    if (input <= 3 && input >= 1) {
        return "Gültige Zahl";
    }
    return "x";
}

int main() {
    char *pointer, input[100];
    long number;

    while (fgets(input, sizeof(input), stdin)) {
        number = strtol(input, &pointer, 10);
        if (*pointer == 120) {
            exit(0);
        }

        if (number > 3 || number < 1) {
            printf("Ungültige Zahl\n");
        }

        if (pointer == input || *pointer != '\n') {
            printf("Please enter an integer: ");
        } else break;
    }
    printf("You entered: %ld\n", number);
    return 0;
}