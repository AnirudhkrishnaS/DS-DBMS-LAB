 #include<stdio.h>
 #include<stdio.h>
 #include<stdlib.h>
 struct node
 {
    int data;
    struct node *next;
 };
 struct node *head , *newnode , *temp;
 head = 0;




 void create(){
    char choice;
newnode  = (struct node*)malloc(sizeof(struct node));
printf("Enter the data : \n");
scanf("%d" , &newnode->data);
newnode->next = 0;
if(head == 0){
head = temp = newnode;
}else{

    temp->next = newnode;
    temp = newnode;
}
printf("Do you want to create an another (y/n)");
}


void display(){
    temp = head;
    while(temp!=0){
        printf("%d",temp->data);
        temp = temp->next;
    }
}
void main(){
    create();
    display();
}


