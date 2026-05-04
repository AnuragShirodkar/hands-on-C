// #include<stdio.h>

// struct student{
//     char name[50];
//     int usn;
//     float cgpa;
// };

// //void print(char name[], int roll, float cgpa){//for separate parameteres 
// void print(struct student s){  
// printf("%s", s.name); // no need of s.variables if you sre sending a sepearte values 
//     printf("\n%d", s.usn);
//     printf("\n%0.2f", s.cgpa);
// }

// int main(){
//     struct student s1 = { "Anurag", 9, 8.18};
//     //print(s1.name, s1.usn, s1.cgpa);// to send separate parameters
//     print(s1);//to send entire structure

//     return 0;
// }

#include <stdio.h>

struct Books {
    char BookName[100];
    char Author[50];
    int Publication;
    int PageNo;
    float Cost;
};

void parameters(struct Books B[], int size);

int main() {

    struct Books B[5] = {
        {"Attack on Titan", "Hajime Isayama", 2016, 890, 5000},
        {"Death Note", "Tsugumi Ohba", 2019, 390, 1500.25},
        {"Solo Leveling", "Chugong", 2023, 256, 750.98},
        {"Jujutsu Kaisen", "Gege Akutami", 2022, 400, 2500.25},
        {"Demon Slayer", "Koyoharu Gotouge", 2023, 550, 3500.75}
    };

    parameters(B, 5);

    return 0;
}

void parameters(struct Books B[], int size) {

    for(int i = 0; i < size; i++) {

        printf("--- Manga #%d ---\n", i + 1);
        printf("Manga Name: %s\n", B[i].BookName);
        printf("Author Name: %s\n", B[i].Author);
        printf("Publication Year: %d\n", B[i].Publication);
        printf("Page No: %d\n", B[i].PageNo);
        printf("Cost: %.2f\n", B[i].Cost);
        printf("____________________________________________\n\n");
    }
}



    