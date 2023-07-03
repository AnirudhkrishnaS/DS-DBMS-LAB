
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

void search(){
    struct node *current ;
    int value , flag = 0 , i=1;
    printf("Enter the value to be search :\n");
    scanf("%d",&value);
    current = head;
    while(current!=NULL){
        if(current->data == value){
            printf("%d found at node %d",value,i);
            flag = 1;
        }
        current = current->next;
        i++;
    }
    if(flag = 0){
        printf("\n%d not found in linked list \n",value);
    }
 }

 





void main(){
    create();
    display();
    search();
}