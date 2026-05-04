#include <stdio.h>

struct Books {
    char BookName[100];
    char Author[50];
    int Publication;
    int PageNo;
    float Cost;
};

int main() {
    // Create an array of 5 Book structures
    struct Books B[5] = {
        {"Attack on Titan", "Hajime Isayama", 2016, 890, 5000},
        {"Death Note", "Tsugumi Ohba", 2019, 390, 1500.25},
        {"Solo Leveling", "Chugong", 2023, 256, 750.98},
        {"Jujutsu Kaisen", "Gege Akutami", 2022, 400, 2500.25},
        {"Demon Slayer", "Koyoharu Gotouge", 2023, 550, 3500.75}
    };

    // Arrays in C are 0-indexed, so we loop from 0 to 4
    for(int i = 0; i < 5; i++) {
        printf("--- Manga #%d ---\n", i + 1);
        printf("Manga Name: %s\n", B[i].BookName);
        printf("Author Name: %s\n", B[i].Author);
        printf("Publication Year: %d\n", B[i].Publication);
        printf("Page No: %d\n", B[i].PageNo);
        printf("Cost: %.2f\n\n", B[i].Cost); 
        printf("\n____________________________________________");// .2f limits to 2 decimal places
    }

    return 0;
}