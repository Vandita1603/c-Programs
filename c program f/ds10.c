#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
int front=-1 ,rear=-1;
int dq[MAXSIZE];
int item ,i , ch;
char choice;
void insert_beg();
void insert_end();
int del_beg();
int del_end();
void traverse();
int main(){
    do{
        printf("\n\t\t 1. Insert from front");
        printf("\n\t\t 2. Insert from end");
        printf("\n\t\t 3. Delete from front");
        printf("\n\t\t 4. Delete from end");
        printf("\n\t\t 5. Traverse");
        printf("\n Enter your choice :- ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                insert_beg();
                break;
            case 2:
                insert_end();
                break;
            case 3:
            i=del_beg();
            printf("\n deleted value is %d",i);
            break;
            case 4:
            i=del_end();
            printf("\n deleted value is %d",i);
            break;
            case 5:
            traverse();
            break;
            default:
            printf("\n Invalid choice");

        }
        printf("\n Do you want to continue:- ");
        fflush(stdin);
        scanf("%c",&choice);
    }while(choice== 'y' || choice == 'Y'); 
}
void insert_beg(){
    if(front==0 && rear==MAXSIZE-1){
        printf("\n DQUEUE IS FULL");
        return;
    }
    else{
        printf("\n Enter a value :- ");
        scanf("%d", &item);
        if (front==-1){
            front=rear=0;
            dq[front]=item;
        }
        else{
            if (front=0 && rear!=MAXSIZE-1){
                for(i=rear; i>=front;i--){
                    dq[i+1]=dq[i];

                }
                dq[front]=item;
                rear=rear+1;

            }
            else if (front>0) {
                front=front-1;
                dq[front]=item;

            }
        }
    }
}
void insert_end(){
    if(rear==MAXSIZE-1){
        printf("\n DQUEUE IS FULL");
        return;
    }
    else{ 
        printf("\n Enter a value:===  ");
        scanf("%d", &item);
        if (front==-1){
            front=rear=0;
        }
        else{
            rear=rear+1;
        }
        dq[rear]=item;
    }
}
int del_beg(){
    if(front==-1){
        printf("\n dqueue is empty");
        exit(0);
    }
    else{
        item=dq[front];
        if(front==rear){
            front=rear=-1;
        }
        else{
            front=front+1;
        }
        return(item);   
    }
}
int del_end(){
    if(rear==-1){
        printf("\n dqueue is empty");
        exit(0);
    }
    else{
        item=dq[rear];
        if(front==rear){
            front=rear=-1;
        }
        else{
            rear=rear-1;
        }
        return(item);   
    }
}
void traverse(){
    if(front==-1){
        printf("\n dqueue is empty");
        exit(0);
    }
    else{
        for(i=front;i<=rear;i++){
            printf("\n %d",dq[i]);
        }
    }
}