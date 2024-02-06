#include <stdbool.h>

#ifndef UNIVERSITY_C_STRUCTARRAYS_H
#define UNIVERSITY_C_STRUCTARRAYS_H

void add_element(char* arguments);
void remove_element(char* arguments);

char* getArg(char inputString[], int index);
char** getArgs(char inputString[]);

#endif
