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

int factorial(int number);
unsigned int multiply(unsigned int a, unsigned int b);
unsigned int modulo(unsigned int x, unsigned int n);

int myOwnStrLen(const char* string);

// Exercise 10
int is_square(Rectangle* rectangle);
Rectangle* surround(Point points[], int n);

// Exercise 7
void paintCross(int size);

#endif
