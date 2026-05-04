#include <stdio.h>
#include <string.h>

struct bday {
    int date, month, year;
};

struct student {
    char name[20];
    int usn;
    float cgpa;
    struct bday *dob;   // pointer to bday
};

int main() {

    struct student s1;     
    struct bday b1;        

    struct student *ptrIN = &s1;   // pointer points to student
   // struct bday *ptrOUT = &b1;     // pointer points to bday
    
    ptrIN->dob = &b1;
    strcpy(ptrIN->name, "Anurag");
    ptrIN->usn = 19;
    ptrIN->cgpa = 9.99;

    //ptrIN->dob = ptrOUT; (Linking the 2 pointer)
   
    ptrIN->dob->date = 6;
    ptrIN->dob->month = 2;
    ptrIN->dob->year = 2000;

    printf("Name = %s\n", ptrIN->name);
    printf("USN = %d\n", ptrIN->usn);
    printf("CGPA = %.2f\n", ptrIN->cgpa);
    printf("DOB = %d / %d / %d\n",
           ptrIN->dob->date,
           ptrIN->dob->month,
           ptrIN->dob->year);

    return 0;
}
