#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}*head = NULL;

void create(){
    char ch;
    do{
        struct node *newnode , *temp;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data :\n");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(head == NULL){
            head = temp = newnode;
        }else{
            temp->next = newnode;
            temp = newnode;
        }
        printf("add more ? (y/n)\n");
        ch = getch();
    }while(ch == 'y');
}



void display(){
    struct node *temp = head;
    printf("The LinkedList :\n");
    while(temp!=0){
        printf("%d->",temp->data);
        temp = temp->next;

    }
    printf("NULL");


}

void main(){
    create();
    display();
}