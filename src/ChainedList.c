#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Exam.h"

int main() {
    struct Stock *first = NULL;
    struct Stock *current = NULL;

    first = malloc(sizeof(struct Stock));

    if (!first) {
        return 1;
    }

    current = first;

    strcpy(current->stock_number, "test");
    current->shares = 1234;
    current->price = 1234.10;

    current->next = malloc(sizeof(struct Stock));

    if (!current->next) {
        return 1;
    }

    current = current->next;
    strcpy(current->stock_number, "918422");
    current->shares = 86;
    current->price = 449.75;

    current->next = NULL;

    current = first;

    while (current) {
        printf("%-7s\t%d\t%.2f\t%.2f\n",
               current->stock_number,
               current->shares, current->price,
               current->price * current->shares);

        current = current->next;
    }

    remove_element(&first, 1);
    current = first;

    while (current) {
        printf("%-7s\t%d\t%.2f\t%.2f\n",
               current->stock_number,
               current->shares, current->price,
               current->price * current->shares);

        current = current->next;
    }

    return 0;
}

void remove_element(Stock** first, int index) {
    Stock* current = *first;
    Stock* previous = *first;

    for (int i = 0; current; i++) {
        if (i == index) {
            previous->next = current->next;
            free(current);
            current = NULL;
        } else {
            previous = current;
            current = current->next;
        }
    }
}