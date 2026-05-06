#include <stdio.h>

int Total(int m1, int m2, int m3, int m4, int m5) {
    return m1 + m2 + m3 + m4 + m5;
}

float Average(int total) {
    return total / 5;
}

char Grade(float avg) {
    if(avg >= 90) {
    return 'A';
    }
    else if(avg >= 75) {
        return 'B';
    }
    else if(avg >= 60) {
        return 'C';
    }
    else if(avg >= 50) {
        return 'D';
    }
    else {
        return 'F';
    }
}

int main() {
    int m1, m2, m3, m4, m5, total;
    float avg;
    char grade;

    printf("Enter marks of 5 subjects out of 100 : ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = Total(m1, m2, m3, m4, m5);
    avg = Average(total);
    grade = Grade(avg);

    printf("\nTotal = %d", total);
    printf("\nAverage = %.2f", avg);
    printf("\nGrade = %c\n", grade);

    return 0;
}
