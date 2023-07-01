#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*top;
void push(int);
void pop();
void display();


void main(){
    int value , choice;
    top = NULL;
    do{
        printf("\n 1.PUSH \n");
        printf("\n 2.POP \n");
        printf("\n 3.DISPLAY \n");
        printf("\n 4.EXIT \n");
        printf("\n Enter your choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : printf("Enter the item to be inserted :");
            scanf("%d",&value);
            push(value);
            break;

            case 2 : pop();
            break;

            case 3 : display();
            break;

            case 4 : exit(0);
            break;

            default : printf("\n invalid choice ");

        }



    }while(choice != 0);
}

void push(int value){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = top;
    top = newnode;
    printf("Item inserted \n");
}


void pop(){
struct node *temp;
int item;
temp = top;
if(temp == NULL){
    printf("Stack is Empty :\n");

}else{
    item = temp->data;
    top = temp->next;
    printf("The deleted Element is : %d" , item);
    free(temp);
}
}





void display(){
    struct node *temp;
    temp = top;
    printf("\nThe Elements are .. \n");
    
        if(temp == NULL){
            printf("Stack is empty \n");

        }else{
            while(temp!=NULL){
            printf("%d ->",temp->data);
            temp = temp->next;
            }
        }

    printf("NULL");
}