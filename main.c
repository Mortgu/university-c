#include <stdio.h>
#include <assert.h>

unsigned int maxEvenRec(unsigned int arr[], int index, int size) {
    int evenOne = 0;
    int evenTwo = 0;

    if (size == 0) return 0;

    if (arr[index] % 2 == 0)
        evenOne = arr[index];

    evenTwo = maxEvenRec(arr, index + 1, size - 1);

    if (evenOne > evenTwo) {
        return evenOne;
    }

    return evenTwo;
}

int main(void) {
    unsigned int arr[15] = {100, 23, 34, 11, 12};
    printf("%i", maxEvenRec(arr, 0, 5));

   // assert(maxEvenRec(arr, 0, 5) == 100);
}

