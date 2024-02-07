#ifndef UNIVERSITY_CLI_H
#define UNIVERSITY_CLI_H
#include <time.h>

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

void add_element(char* arguments[]);
void remove_element(char* element_name);

char* getArgument(char* inputString, int index);
char** getArguments(char* inputString);

#endif
