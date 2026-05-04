#include<stdio.h>

struct student{
    char name[50];
    int usn;
    float cgpa;
};

void print(struct student *s){  
    s->usn = 22;
    s->cgpa = 9.99;

    printf("%s", s->name); 
    printf("\n%d", s->usn);
    printf("\n%0.2f", s->cgpa);
}

int main(){
    struct student s1 = { "Anurag", 9, 8.18};
    struct student *sptr = &s1;
    print(sptr);

    return 0;
}