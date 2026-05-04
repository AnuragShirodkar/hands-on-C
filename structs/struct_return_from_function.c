// #include <stdio.h>
// #include <string.h>

// struct Book {
//     char name[50];
//     int price;
// };

// struct Book createBook() {

//     struct Book b;

//     strcpy(b.name, "Attack on Titan");
//     b.price = 500;

//     return b;   // returning structure
// }

// int main() {

//     struct Book B1;

//     B1 = createBook();   // receive returned structure

//     printf("Book Name: %s\n", B1.name);
//     printf("Price: %d\n", B1.price);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

struct Book {
    char name[50];
    int price;
};

struct Book createBook() {

    struct Book *b;

    strcpy(b.name, "Attack on Titan");
    b.price = 500;

    return &b;   // returning structure
}

int main() {

    struct Book B1;
    struct *sptr = B1;

    sptr = createBook();   // receive returned structure

    printf("Book Name: %s\n", B1->name);
    printf("Price: %d\n", B1->price);

    return 0;
}