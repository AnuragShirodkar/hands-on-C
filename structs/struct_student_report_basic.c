#include <stdio.h>

struct Report {
    char Name[100];
    int s1, s2, s3, s4, s5, usn;
    float Avg; 
};

int main() {

    int N, i;

    printf("Enter the number of Students: ");
    scanf("%d", &N);
   
    struct Report S[N];

    for(i = 0; i < N; i++) {

        printf("\nEnter the Name of the student: ");
        fgets(S[i].Name, sizeof(S[i].Name), stdin);

        printf("Enter the USN : ");
        scanf("%d", &S[i].usn);
        
        printf("Enter the Marks of Subject 1 : ");
        scanf("%d", &S[i].s1);

        printf("Enter the Marks of Subject 2 : ");
        scanf("%d", &S[i].s2);

        printf("Enter the Marks of Subject 3 : ");
        scanf("%d", &S[i].s3);

        printf("Enter the Marks of Subject 4 : ");
        scanf("%d", &S[i].s4);

        printf("Enter the Marks of Subject 5 : ");
        scanf("%d", &S[i].s5);

        while(getchar() != '\n');

        S[i].Avg = (S[i].s1 + S[i].s2 + S[i].s3 +
                    S[i].s4 + S[i].s5) / 5.0;
    }

    for(i = 0; i < N; i++) {

        printf("\n----------------------------\n");
        printf("Name : %s", S[i].Name);
        printf("USN : %d\n", S[i].usn);
        printf("Average : %.2f\n", S[i].Avg);
        printf("----------------------------\n");
    }

    return 0;
}
