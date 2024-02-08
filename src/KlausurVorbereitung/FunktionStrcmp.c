#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strcmp2(const char* string1, const char* string2);

typedef struct Person {
    int age;
    char firstName[30];
    char lastName[30];
} Person;

struct Person *createPerson(char* firstN, char* lastN, int age) {
    Person *person = malloc(sizeof(Person));

    if (person == NULL) {
        printf("Failed to allocate memory for person.");
        free(person);
        return NULL;
    }

    person->age = age;
    strcpy(person->firstName, firstN);
    strcpy(person->lastName, lastN);

    return person;
}

int main() {
    int result = strcmp2("test", "test");
    //printf("%i", result);

    for (int i = 0; i <= 20; i+=2) {
        printf("%i ", i);
    }

    Person oskar = createPerson("Oskar", "Sammet", 20);

    //printf("%s", oskar.lastName);

    return 0;
}

int strcmp2(const char* string1, const char* string2) {
    int lengthString1, lengthString2;

    for (lengthString1 = 0; string1[lengthString1] != '\0'; ++lengthString1);
    for (lengthString2 = 0; string2[lengthString2] != '\0'; ++lengthString2);

    if (lengthString1 != lengthString2)
        return -1;

    for (int i = 0; i < string1[i] != '\0'; i++) {
        if (string1[i] != string2[i]) return -1;
    }

    return 0;
}

