#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
int front=-1 ,rear=-1;
int cq[MAXSIZE];
int item ,i , ch;
char choice;
void insert();
int del();
void traverse();
int main(){
    do{
        printf("\n\t\t 1. Insert");
        printf("\n\t\t 2. Delete");
        printf("\n\t\t 3. Traverse");
        printf("\n Enter your choice");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                insert();
                break;
            case 2:
            i=del();
            printf("\n deleted value is %d",i);
            break;
            case 3:
            traverse();
            break;
            default:
            printf("\n Invalid choice");

        }
        printf("\n Do you want to continue");
        fflush(stdin);
        scanf("%c",&choice);
    }while(choice== 'y' || choice == 'Y'); 
}
void insert(){
    if(front==(rear+1) % MAXSIZE){
        printf("\n circular queue is full");
        exit(0);
    }
    else{
        printf("\n Enter a value");
        scanf("%d", &item);
        if (front == -1){
            front=rear=0;
        }
        else{
            rear=(rear+1)%MAXSIZE;
        }
        cq[rear]=item;
    }
    return;
}
int del(){
    if(front==-1){
        printf("\n circular queue is empty");
        exit(0);
    }
    else{
        item=cq[front];
        if(front==rear){
            front=rear=-1;
        }
        else{
            front=(front+1)%MAXSIZE;
        }
        return(item);   
    }
}
void traverse(){
    if(front==-1){
        printf("\n Circular queue is empty");
        exit(0);
    }
    else{
        if(rear>=front){
            for(i=front;i<=rear;i++){
                printf("\n %d",cq[i]);
            }
        }
        else{
            for(i=front; i<MAXSIZE; i++){
                printf("\n %d",cq[i]);
            }
            for(i=0;i<=rear;i++){
                printf("\n %d",cq[i]);
            }
        }
    }
}