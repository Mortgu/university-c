#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int generate_random_number() {
    time_t t;
    srand((unsigned) time(&t));
    return rand() % 50;
}

void loop(int number) {
    int input;
    scanf("%d", &input);

    if (input != number) {
        if (input < number) {
            printf("the number is bigger :/\n");
        } else if (input > number) {
            printf("the number is smaller :)\n");
        }
        return loop(number);
    }

    printf("Successfully guessed number :)");
}

void on_enable() {
    int random_number = generate_random_number();
    loop(random_number);
}