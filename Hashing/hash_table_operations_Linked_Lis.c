#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

// Node structure
struct node {
    int data;
    struct node* next;
};

// Hash table
struct node* hashset[SIZE];

// Initialize table
void hashtable()
{
    for(int i=0; i<SIZE; i++)
    {
        hashset[i] = NULL;
    }
}

// Hash function
int key(int data){
    return data % SIZE;
}

// Check if element exists
int contains(int data){
    int index = key(data); 
    struct node* temp = hashset[index];

    while(temp != NULL){
        if(temp->data == data)
            return 1;
        temp = temp->next;
    }
    return 0;
}

// Insert element
int add(int data){
    int index = key(data);

    if(contains(data)){
        printf("Data already present\n");
        return 0;
    }

    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = hashset[index];

    hashset[index] = newNode;

    printf("Data %d inserted\n", data);
    return 1;
}

// Search element
int search(int data){
    int index = key(data);
    struct node* temp = hashset[index];

    while(temp != NULL){
        if(temp->data == data){
            printf("Data %d found\n", data);
            return 1;
        }
        temp = temp->next;
    }

    printf("Data %d not found\n", data);
    return 0;
}

// Delete element
int delete(int data){
    int index = key(data);
    struct node* temp = hashset[index];
    struct node* prev = NULL;

    while(temp != NULL){
        if(temp->data == data){
            if(prev == NULL)
                hashset[index] = temp->next;
            else
                prev->next = temp->next;

            free(temp);
            printf("Deleted %d\n", data);
            return 1;
        }
        prev = temp;
        temp = temp->next;
    }

    printf("Element %d not found\n", data);
    return 0;
}

// Print table
void print()
{
   printf("HASH TABLE:\n");
   for(int i=0;i<SIZE;i++)
   {
        printf("Index %d:",i);

        struct node* temp = hashset[i];

        while(temp != NULL){
            printf(" %d ->", temp->data);
            temp = temp->next;
        }
        printf(" NULL\n");
   }
}

int main()
{
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);

    int arr[size];

    hashtable();

    printf("Enter elements:\n");

    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
        add(arr[i]);
    }

    print();

    int Scr;
    printf("Enter element to search: ");
    scanf("%d", &Scr);
    search(Scr);

    int del;
    printf("Enter element to delete: ");
    scanf("%d", &del);
    delete(del);

    print();

    return 0;
}