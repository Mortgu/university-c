#ifndef UNIVERSITY_EXAM_H
#define UNIVERSITY_EXAM_H

typedef struct Point {
    double x;
    double y;
} Point;

typedef struct Rectangle {
    Point upperRightCorner;
    Point lowerLeftCorner;
} Rectangle;

typedef struct Stock {
    char stock_number[7];
    int shares;
    float price;
    struct Stock *next;
} Stock;

int factorial(int number);
unsigned int multiply(unsigned int a, unsigned int b);
unsigned int modulo(unsigned int x, unsigned int n);

int myOwnStrLen(const char* string);

// Exercise 10
int is_square(Rectangle* rectangle);
Rectangle* surround(Point points[], int n);

// Exercise 7
void paintCross(int size);

// PG1 Fischer 2021 WS PK Task 1a
int _strcmp_(char* a, char* b);

// Exercise 4 (1. Wiederholung Kontrollstrukturen)
void printNumberMod2(int number);

void swapElements(int* indexA, int* indexY);

// Stock struct
void remove_element(Stock** first, int index);

#endif
