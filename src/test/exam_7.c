#include <stdio.h>

void printCross(unsigned int size);

int main() {

    return 0;
}

void printCross(unsigned int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            //printf("(%i,%i)", i, j);
            if (i == j) {
                printf("*");
            } else if (j == (size - 1 - i)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
