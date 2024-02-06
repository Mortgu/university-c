#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Months {
    const char *month_name;
    int days;
} months[] = {
        {.month_name = "January", .days = 30},
        {.month_name = "February", .days = 28},
        {.month_name = "March", .days = 29},
        {.month_name = "April", .days = 30},
        {.month_name = "Mai", .days = 29},
        {.month_name = "Jun", .days = 30},
        {.month_name = "July", .days = 30},
        {.month_name = "August", .days = 30},
        {.month_name = "September", .days = 30},
        {.month_name = "October", .days = 30},
        {.month_name = "November", .days = 30},
        {.month_name = "December", .days = 30}
};

int main() {
    struct Months month;

    for (int i = 0; i < sizeof(months); i++) {
        printf("%s - %i\n", months[i].month_name, months[i].days);
    }


    return 0;
}