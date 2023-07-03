
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


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
                    min = ptr;
                }
                ptr = ptr->next;
            }
            if(min != temp){
                item = temp->data;
                temp->data = min->data;
                min->data = item;
            }
            temp = temp->next;
        }

    }
 }




//  void sort(){
//     int item;
//     struct node *temp , *min , *ptr;
//     if(head == NULL){
//         printf("List is empty :(");
//     }else{
//         temp = head;
//         while(temp!= NULL){
//             min = temp;
//             ptr = temp->next;
//             while(ptr != NULL){
//                 if(ptr->data<temp->data){
//                     item = temp->data;
//                 temp->data = min->data;
//                 min->data = item;
//                 }
//                 ptr = ptr->next;
//             }
//             temp = temp->next;

            
//             }
//         }

//     }




void main(){
    create();
    display();
    sort();
    display();

}
 