#include <stdio.h>
// #include<stdlib.h>
// #define MAXSIZE 10
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
int ch;
int item, loc;
char choice;
void insert_at_begin();
void insert_at_end();
void insert_at_loc();
int del_beg();
int del_end();
int del_loc();
void traverse();
int main()
{
    // int ch;
    // int item;
    // char choice;
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
            insert_at_begin();
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
        fflush(stdin);
        printf("\nDo you want to continue : ");
        scanf("\n%c", &choice);

    } while (choice == 'y' || choice == 'Y');
    return 0;
}
void insert_at_begin()
{
    struct node *new1;
    printf("\nEnter a value :");
    scanf("%d", &item);
    new1 = (struct node *)malloc(sizeof(struct node));
    new1->data = item;
    if (start == NULL)
    {
        new1->next = NULL;
        start = new1;
    }
    else
    {
        new1->next = start;
        start = new1;
    }
}
void insert_at_end()
{
    struct node *new1, *ptr;
    printf("\n Enter a value : ");
    scanf("%d", &item);
    new1=(struct node*)malloc(sizeof(struct node));
    new1->data = item;
    new1->next = NULL;
    if (start == NULL)
    {
        start = new1;
    }
    else
    {
        ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
            ptr->next = new1;
        }
    }
}
void insert_at_loc()
{
    struct node *new1, *ptr;
    int i = 1;
    ptr = start;
    printf("\n Enter a value : ");
    scanf("%d", &item);
    printf("\nenter the location :");
    scanf("%d", &loc);

    // new1 = (struct node *)malloc(sizeof(struct node));
    // new1->data = item;
    if (start == NULL)
    {
        printf("\n Insertion not possible");
        return;
    }
    else
    {
        while (i < loc)
        {
            ptr = ptr->next;
            i = i + 1;
        }
        new1=(struct node*)malloc(sizeof(struct node));
        new1->data=item;
        new1->next = ptr->next;
        ptr->next = new1;
    }
}
int del_beg()
{
    struct node *ptr;
    if (start == NULL)
    {
        printf("\n List is empty");
        return 0;
    }
    else
    {
        ptr = start;
        start = start->next;
        printf("\n deleted node is %d ", ptr->data);
        free(ptr);
    }

    return 0;
}
int del_end()
{
    struct node *ptr, *temp;
    if (start == NULL)
    {
        printf("\n List is empty");
        return 0;
    }
    else if (start->next == NULL)
    {
        ptr = start;
        start = NULL;
        printf("\n deleted node VALUE is %d", ptr->data);
        free(ptr);
    }
    else
    {
        ptr = start;
        while (ptr->next != NULL)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = NULL;
        printf("deleted node is : %d ", ptr->data);
        free(ptr);
    }
    return 0;
}
int del_loc()
{
    struct node *ptr, *temp;
    int i;
    printf("enter the location :");
    scanf("%d", &loc);
    if (start == NULL)
    {
        printf("\n List is empty");
        return 0;
    }
    else if (start->next == NULL)
    {
        printf("Deletion not possile ");
        // return 0;
    }
    else
    {
        ptr = start;
        i = 1;
        while (i < loc)
        {
            temp = ptr;
            ptr = ptr->next;
            i = i + 1;
        }
        printf("deletion value is : %d", ptr->data);
        temp->next = ptr->next;
        free(ptr);
    }
    return 0;
}
void traverse(struct node *ptr)
{
    ptr = start;
    if (ptr == NULL)
    {
        printf("\n List is empty");
        return;
    }
    else
    {
        while (ptr != NULL)
        {
            printf("\n %d", ptr->data);
            ptr = ptr->next;
        }
    }
}