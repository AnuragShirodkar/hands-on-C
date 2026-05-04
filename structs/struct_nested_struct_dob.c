#include<stdio.h>

struct bday{
    int date, month, year;
};

struct student{
    char name[20];
    int usn;
    float cgpa;
    struct bday dob;
};

int main(){
    struct student s1;
    struct student *sptr;
    strcpy(sptr->name, "Anurag");
    sptr->usn = 19;
    sptr->cgpa = 9.99;
    sptr->dob.date = 6;
    sptr->dob.month = 2;
    sptr->dob.year = 2000; 
    //struct student s1 = {"Anurag", 9, 8.18, {19, 02, 2004}};
    printf("Name = %s\n ", sptr->name);
    printf("USN : %d\n", sptr->usn);
    printf("Cgpa : %0.2f\n", sptr->cgpa);
    printf("D O B : %d / %d / %d\n ", sptr->dob.date, sptr->dob.month, sptr->dob.year);
    return 0;
}