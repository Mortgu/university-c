#include <stdio.h>

int function_1(int input);

int function_2();

int i;

void on_enable() {
    int j;
    i = 5, j = 2;

    printf("i ist %i, j ist %i\n", i, j);

    i = function_1(j);
    printf("i ist %i, j ist %i\n", i, j);

    i = function_2();
    printf("i ist %i, j ist %i\n", i, j);
}

int function_1(int input) {
    i = i * 2;
    function_2();
    return input + 5;
}

int function_2() {
    int j;
    for (j = 0; j < 10; j++) {
        i += 1;
    }

    return i;
}