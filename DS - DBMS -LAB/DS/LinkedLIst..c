#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
void display();
void create();
void sort();
void search();


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



 void deleteFromPos(){
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


void sort(){
    int item;
    struct node *temp , *min , *ptr;
    if(head == NULL){
        printf("List is empty :(");
    }else{
        temp = head;
        while(temp->next!= NULL){
            min = temp;
            ptr = temp->next;
            while(ptr != NULL){
                if(ptr->data<temp->data){
                    item = temp->data;
                temp->data = min->data;
                min->data = item;
                }
                ptr = ptr->next;
            }
            temp = temp->next;

            
            }
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
    deleteFromPos();
    display();

}