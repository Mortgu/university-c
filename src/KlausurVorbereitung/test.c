#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int factorial(int number) {
    if (number == 1) {
        return 1;
    } else {
        return number * factorial(number-1);
    }
}

unsigned int multiply(unsigned int a, unsigned int b) {
    if (b == 1) {
        return a;
    } else {
        return a + multiply(a, b-1);
    }
}

int myOwnStrLen(const char *string) {
    int length;

    for (length = 0; string[length] != 0; length++);

    return length;
}

typedef struct Point {
    double x;
    double y;
} Point;

typedef struct Rectangle {
    Point upperRightCorner;
    Point lowerLeftCorner;
} Rectangle;

int is_square(Rectangle *rectangle) {
    double x_diff = fabs(rectangle->upperRightCorner.x - rectangle->lowerLeftCorner.x);
    double y_diff = fabs(rectangle->upperRightCorner.y - rectangle->lowerLeftCorner.y);

    if (x_diff == y_diff) return 1;
    return 0;
}

Rectangle *surround(Point points[], int n) {
    Rectangle *rectangle = (Rectangle*) malloc(sizeof(struct Rectangle));

    if (rectangle == NULL) {
        printf("Error allocating memory for struct Rectangle!");
        return NULL;
    }
    rectangle->upperRightCorner.x = points[0].x;
    rectangle->upperRightCorner.y = points[0].y;

    rectangle->lowerLeftCorner.x = points[0].x;
    rectangle->lowerLeftCorner.y = points[0].y;

    for (int i = 0; i <= n; i++) {
        if (rectangle->upperRightCorner.x < points[i].x) {
            rectangle->upperRightCorner.x = points[i].x;
        }

        if (rectangle->upperRightCorner.y < points[i].y) {
            rectangle->upperRightCorner.y = points[i].y;
        }

        if (rectangle->lowerLeftCorner.x > points[i].x) {
            rectangle->lowerLeftCorner.x = points[i].x;
        }

        if (rectangle->lowerLeftCorner.y > points[i].y) {
            rectangle->lowerLeftCorner.y = points[i].y;
        }
    }

    return rectangle;
}

int main() {
    unsigned int result = multiply(15, 2);
    printf("%i\n", result);

    char* string = "oskar";
    printf("length: %i\n", myOwnStrLen(string));

    Rectangle rectangle = {{6, 5}, {0, 0}};
    int isSquareResult = is_square(&rectangle);
    printf("isSquareResult: %i\n", isSquareResult);

    Point points[4] = {{1, 2}, {5, 2}, {1, 0}, {2, 7}};
    Rectangle *surroundingRectangle = surround(points, 3);

    printf("(%f, %f) | (%f, %f)\n", surroundingRectangle->upperRightCorner.x,
           surroundingRectangle->upperRightCorner.y,
           surroundingRectangle->lowerLeftCorner.x,
           surroundingRectangle->lowerLeftCorner.y);

    clock_t start_t, end_t;
    double time_taken;

    time_t now;
    start_t = clock();

    time(&now);

    printf("Die Zeit in Sekunden seit dem 1.1.1970 um 0:00:00 Uhr: %ld\n", now);

    end_t = clock();
    time_taken = (double) (end_t - start_t) / CLOCKS_PER_SEC;

    struct tm *tm_now;
    time(&now);

    tm_now = localtime(&now);

    printf("Heute ist der %d.%d.%d\n",
           tm_now->tm_mday, tm_now->tm_mon + 1,
           tm_now->tm_year + 1900);

    printf("Dieses Programm hat %f Sekunden gebraucht\n", time_taken);

    return 0;
}
