#include <stdio.h>
#include <stdlib.h>
#include "cli.h"

int main(int argc, char *argv[]) {
    Commands commands[2] = {{"add", &add_element}, {"remove", &remove_element}};

    return EXIT_SUCCESS;
}

void add_element(char *arguments[]) {

}

void remove_element(char* arguments) {

}

