#include<stdio.h>
#define SIZE 10
#define BUCKET_SIZE 5

int hashset[SIZE][BUCKET_SIZE];

int count[SIZE];

void hashtable()
{
    for(int i=0;i<SIZE;i++)
    {
        count[i]=0;
        for(int j=0;j<BUCKET_SIZE;j++)
            hashset[i][j]=-1;
    }
}

int key(int data){
    return data % SIZE;
}

int data(int arr[]){

}

int contains(int data){
    int index = key(data);
    for(int i=0; i< count[i]; i++){
        if(hashset[index][i] == data){
            return 1;
        }
        return 0;
    }
}

int add(int data){
    int index = key(data);
    if(contains(data == 1)){
        printf("Data present in the table\n");
        return 1;
    }
    if(count[index] == BUCKET_SIZE){
        printf("Bucket full! insertion failed for %d\n", data);
        return 0;
    }
    hashset[index][count[index]] = data;
    count[index]++;
    printf("Data %d inserted successfully into the table\n", data);
}

int search(int data){
    int index = key(data);
    for(int i=0; i<BUCKET_SIZE; i++){
        if(data == hashset[index][i]){
            printf("Data %d found in the table\n", data);
            return;
        }
    }
    printf("Data %d not found in the table\n", data);
}

int delete(int data){
    int index = key(data);
    int i, j;
    for(i=0; i<BUCKET_SIZE; i++){
        if(data == hashset[index][i]){
            //for shifting
            for(j=i; j<count[index]-1; j++){
                hashset[index][j] = hashset[index][j+1];
            }
            hashset[index][j]=-1;
            printf("Removed %d\n", data);
            return;
        }
    }
    printf("Elemenr %d not found\n", data);
}

void print()
{
   printf("HASH SET TABLE:\n");
   for(int i=0;i<SIZE;i++)
   {
        printf("INDEX %d:",i);
        for(int j=0;j<BUCKET_SIZE;j++)
        {
            printf("\t%d\t",hashset[i][j]);
        }
    printf("\n");
   }
}

int main()
{
    int size;
    printf("Enter the size of an array (MAX 50): ");
    scanf("%d", &size);
    hashtable();
    printf("Enter %d elements in an array: ",size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
        printf("%d\t", arr[i]);
        add(arr[i]);
    }
    print();

    int Scr;
    printf("Enter element to search: ");
    scanf("%d", &Scr);
    search(Scr);

    int del;
    printf("Enter element to remove: ");
    scanf("%d", &del);
    delete(del);
   
    print();
    
}