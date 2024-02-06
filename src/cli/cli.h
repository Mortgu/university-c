#ifndef UNIVERSITY_CLI_H
#define UNIVERSITY_CLI_H

void add_element(char* arguments[]);
void remove_element(char* element_name);

char* getArgument(char* inputString, int index);
char** getArguments(char* inputString);

#endif
