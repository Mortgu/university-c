#include <stdio.h>
int i;
void int_ausgeben(void) {
    printf("%d\n", i);
}
int Schleife(int Zahl) {
    for (i = 1; i < 3; i++) {
        Zahl += i; // 8
    }
    int_ausgeben();
    return Zahl;
}
int main() {
    i = 5;
    i = Schleife(i);
    int_ausgeben();
    return 0;
}