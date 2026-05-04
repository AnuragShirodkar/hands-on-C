#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int usn;
    int marks[5];
} student_info;

typedef struct {
    int total, high;
    float avg;
    char grade;

} cal;

int main() {

    int N, i, j;

    printf("Enter the number of Students: ");
    scanf("%d", &N);

    student_info S[N];

    for(i = 0; i < N; i++) {

        printf("\nEnter Name of Student %d: ", i+1);
        scanf(" %[^\n]", S[i].name);   // safe input for string
        //fgets(S[i].name, sizeof(S[i].name), stdin);

        printf("Enter USN: ");
        scanf("%d", &S[i].usn);

        for(j = 0; j < 5; j++) {
            printf("Enter Marks of Subject %d: ", j+1);
            scanf("%d", &S[i].marks[j]);
        }
    }

    for(i = 0; i < N; i++) {

        cal C;
        C.total = 0;

        for(j = 0; j < 5; j++) {
            C.total = C.total + S[i].marks[j];
        }

        C.avg = C.total / 5;

        if(C.avg >= 90)
            C.grade = 'A';
        else if(C.avg >= 80)
            C.grade = 'B';
        else if(C.avg >= 70)
            C.grade = 'C';
        else if(C.avg >= 60)
            C.grade = 'D';
        else
            C.grade = 'F';

        C.high = S[i].marks[0];   

        for(j = 1; j < 5; j++) {
        if(S[i].marks[j] > C.high) {
        C.high = S[i].marks[j];
        }
    }
        
        
        printf("\n--- Report Card ---\n");
        printf("Name : %s\n", S[i].name);
        printf("USN  : %d\n", S[i].usn);
        printf("Total: %d\n", C.total);
        printf("Highest of marks:  %d\n", C.high);
        printf("Average: %.2f\n", C.avg);
        printf("Grade: %c\n", C.grade);
    }

    return 0;
}
