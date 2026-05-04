#include<stdio.h>
#include<string.h>
 
struct Student{
    char Name[20];
    int usn;
    float cgpa;
}; //mandatory 
int main(){
    struct Student S1;
    strcpy(S1.Name, "Anurag");
    S1.usn = 809;
    S1.cgpa = 8.18;

    printf("Name : %s\n", S1.Name);
    printf("USN : %d\n", S1.usn);
    printf("CGPA : %0.2f", S1.cgpa);

    struct Student S2 = {"Kumkum", 24, 8.90}; //2nd type to initialize the structures
    //print operation remains same
    printf("Name : %s\n", S2.Name);
    printf("USN : %d\n", S2.usn);
    printf("CGPA : %0.2f", S2.cgpa);

    struct Student S3 = {.Name = "Anni", .usn = 9, .cgpa = 8.18};//3rd way of initialization 
    //in this the object type can be missmatched
    printf("Name : %s\n", S3.Name);
    printf("USN : %d\n", S3.usn);
    printf("CGPA : %0.2f", S3.cgpa);

    struct Student S4 = {"Kum", 24, 8.90}; //pointer type to initialize the structures
    struct Student *sptr;
    sptr = &S4;
    printf("Name : %s\n", sptr->Name);
    printf("USN : %d\n", sptr->usn);
    printf("CGPA : %0.2f", sptr->cgpa);

}