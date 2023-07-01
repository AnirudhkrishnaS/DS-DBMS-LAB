#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct node
{
    int data;
    struct node *next;
}*head = NULL;

void create(){
    char ch;
    do{
        struct node *newnode , *temp;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(head == NULL){
            head=temp=newnode;
        }else{
            temp->next = newnode;
            temp=newnode;
        }
        printf("Add more (y/n) ? \n");
        ch = getch();
    }while(ch == 'y');
}

void display(){
     struct node *temp = head;
     printf("THE LINKED LIST :\n");
    while(temp!=0){
        printf("%d ->",temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

void deleteFromBeg(){
    struct node *temp;
    temp = head;
    head = head->next;
    free(temp);
}


void deleteFromEnd(){
    struct node *temp , *prevnode;
    temp = head;
    while(temp->next!=0){
        prevnode = temp;
        temp = temp->next;
    }
    if(temp == head){
        head = 0;
        free(temp);
    }else{
        prevnode->next = 0;
        free(temp);
    }

}

deleteFromPos(){
    int i,pos;
    struct node *todelete , *prevnode;
    printf("\nEnter Position \n");
    scanf("%d",&pos);
    if(head == NULL){
        printf("List is empty");
    }else{
        todelete = head;
        prevnode = head;
        for(i=1;i<pos;i++){
            prevnode = todelete;
            todelete = todelete->next;
        }
        prevnode->next = todelete->next;
        free(todelete);
    }
}





void main(){
    create();
    display();
    deleteFromPos();
    display();

}