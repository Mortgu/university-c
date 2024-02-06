#include <stdio.h>

int main() {

    int  var;
    int  *ptr;
    int  **pptr;

    var = 3000;

    /* take the address of var */
    ptr = &var;

    /* take the address of ptr using address of operator & */
    pptr = &ptr;

    /* take the value using pptr */
    printf("Value of var = %d\n", var );
    printf("Value available at *ptr = %d (address: %p)\n", *ptr, ptr);
    printf("Value available at **pptr = %d (address: %p)\n", **pptr, pptr);


    return 0;
}