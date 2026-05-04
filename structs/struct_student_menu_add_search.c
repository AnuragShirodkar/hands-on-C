#include<stdio.h>

typedef struct{
    char Name[20];
    int usn;
    float cgpa;
} data;

int main(){

    data S[50];
    int search;
    int n = 0, i, Choice;

    printf("-----Press Choice-----\n");
    printf("1. Add Student\n2. Display student data\n3. Search for Student\n4. Exit\n");

    do{
        printf("\nEnter the Choice : ");
        scanf("%d", &Choice);

        switch(Choice){

            case 1:
                if(n == 50){
                    printf("Sorry Class full\n");
                }
                else{
                    printf("\nEnter Name of Student %d: ", n+1);
                    scanf(" %[^\n]", S[n].Name);

                    printf("Enter USN: ");
                    scanf("%d", &S[n].usn);

                    printf("Enter CGPA: ");
                    scanf("%f", &S[n].cgpa);

                    printf("Data Added successfully\n");
                    n++;
                }
                break;

            case 2:
                if(n == 0){
                    printf("No student Data added\n");
                }
                else{
                    for(i = 0; i < n; i++){
                        printf("\n--- Student Data ---\n");
                        printf("Name : %s\n", S[i].Name);
                        printf("USN  : %d\n", S[i].usn);
                        printf("CGPA : %.2f\n", S[i].cgpa);
                    }
                }
                break;

            case 3:{
                printf("Enter the USN to search Student data: ");
                scanf("%d", &search);

                int found = 0;

                for(i = 0; i < n; i++){
                    if(search == S[i].usn){
                        printf("\n--- Student Found ---\n");
                        printf("Name : %s\n", S[i].Name);
                        printf("USN  : %d\n", S[i].usn);
                        printf("CGPA : %.2f\n", S[i].cgpa);
                        found = 1;
                        break;
                    }
                }

                if(!found){
                    printf("Student not found for Roll No : %d\n", search);
                }
                break;
            }

            case 4:
                printf("Thank you. See you soon.\n");
                break;

            default:
                printf("Invalid Choice. Check option again.\n");
        }

    } while(Choice != 4);

    return 0;
}
