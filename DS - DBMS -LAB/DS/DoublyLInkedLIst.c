#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;

}*head = NULL;



void create(){
   
    struct node *newnode , *temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data :\n");
    scanf("%d" , newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    if(head == NULL){
        head =temp= newnode;
    }else{
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
    }
      
      
    }
       

void display(){
    struct node *temp , *current;
    temp = head;
    while(temp!=NULL){
        printf("%d <->",temp->data);
        current = temp;
        temp = temp->next;
       
    }
     printf("NULL\n");
     temp = current;
    while(temp!=NULL){
        printf("%d<->",temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
    
}


void main(){
    int c = 0 , n;
    printf("Enter the no of nodes :");
    scanf("%d",&n);
    while(c<n){
        create();
        c++;
    }
    
    display();
}