#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cli.h"

typedef struct Lecture {
    char lecture_name[16];
    char weekday[16];
    struct tm calendar;
} Lecture;

typedef struct Semester {
    int semester_year;
    Lecture lectures[10];
} Semester;

typedef void (*CommandCallback)(char**);

typedef struct Commands {
    char name[16];
    CommandCallback callback;
} Commands;

int main(int argc, char *argv[]) {
    Commands commands[2] = {
            {"add", &add_element}
    };

    return EXIT_SUCCESS;
}

void add_element(char *arguments[]) {

}

