#include<stdio.h>
#include<string.h>

struct Student{
    char Name[20];
    int usn;
    float cgpa;
};
int main(){
    struct Student S[5];
    int i =1;
    for(i=1; i<=5; i++){
    printf("Enter the Name of the student: ");
    fgets(S[i].Name, sizeof(S[i].Name), stdin);
    printf("\nEnter the USN : ");
    scanf("%d", &S[i].usn);
    printf("\nEnter the CGPA: ");
    scanf("%0.2f", &S[i].cgpa);
    }
     for(i=1; i<=5; i++){
    printf("________________________\n");
    printf("Name : %s\n", S[i].Name);
    printf("USN : %d\n", S[i].usn);
    printf("CGPA : %0.2f", S[i].cgpa);
    printf("________________________\n");
     }
}
 