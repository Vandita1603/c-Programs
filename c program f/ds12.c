#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

struct node
{
    int data;
    struct node *next;
};
struct node *front , *rear;
void insert_at_beg();
void insert_at_end();
void insert_at_loc();
int del_beg();
int del_end();
int del_loc();
void traverse();

int main()
{
    int ch;
    // int item;
    char choice;
    do
    {
        printf("\n\t 1. INSERT_BEG");
        printf("\n\t 2. INSERT_LOC");
        printf("\n\t 3. INSERT_END");
        printf("\n\t 4. DELETE_BEG");
        printf("\n\t 5. DELETE_LOC");
        printf("\n\t 6. DELETE_END");
        printf("\n\t 7. TRAVERSING");
        printf("\nEnter a choice: ");
        scanf("\n %d", &ch);
        switch (ch)
        {
        case 1:
            insert_at_beg();
            break;
        case 2:
            insert_at_loc();
            break;
        case 3:
            insert_at_end();
            break;
        case 4:
            del_beg();
            break;
        case 5:
            del_loc();
            break;
        case 6:
            del_end();
            break;
        case 7:
            traverse();
            break;
        default:
            printf("\nInvalid choice");
        }
        printf("\nDo you want to continue : ");
        scanf("\n%c", &choice);

    } while (choice == 'y' || choice == 'Y');
    return 0;
}
void insert_at_beg()
{
    int item;
    struct node *new1;
    new1 = (struct node *)malloc(sizeof(struct node));
    new1 -> data =item;
    if(front == NULL){
        front= rear = new1;
        new1 -> next = new1;
    }
    else{
        new1 -> next = front;
        front =new1;
    }
    rear -> next = new1;
}
