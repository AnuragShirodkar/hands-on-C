#include <stdio.h>

int isLeap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}

int daysInMonth(int month, int year) {
    if (month == 2)
        return isLeap(year) ? 29 : 28;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}

int totalDays(int d, int m, int y) {
    int days = d;

    for (int i = 1; i < m; i++)
        days += daysInMonth(i, y);

    for (int i = 1; i < y; i++)
        days += isLeap(i) ? 366 : 365;

    return days;
}

int main() {
    int d1, m1, y1;
    int d2, m2, y2;

    printf("Enter today's date (dd mm yyyy): ");
    scanf("%d %d %d", &d1, &m1, &y1);

    printf("Enter future date (dd mm yyyy): ");
    scanf("%d %d %d", &d2, &m2, &y2);

    int days1 = totalDays(d1, m1, y1);
    int days2 = totalDays(d2, m2, y2);

    printf("Number of days between dates = %d\n", days2 - days1);

    return 0;
}
