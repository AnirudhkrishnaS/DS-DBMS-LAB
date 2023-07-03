#include<stdio.h>
int queue[100];
int n , rear = -1 , front = -1;


void main(){
    int choice;
    
        printf("Enter the size of the queue :\n");
        scanf("%d",&n);
        do{
             printf("\n1.INSERT\n");
        printf("\n2.DELETE\n");
        printf("\n3.DISPLAY\n");
        printf("\n4.EXIT\n");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);

        switch (ch)
        {
            case 1: insert();
            break;

            case 2 : delete();
            break;

            case 3 : display();
            break;

            case 4 : exit(0);
            break;

            default : printf("Wrong choice :");
        }

        }while(ch!=0)




}


void insert(){
    int value;
    printf("Enter the value :")
    scanf("%d",&value);
    if(rear = n-1){
        printf("Full");
    }else if(front = -1 && rear = -1){
        front = rear = 0;
        queue[rear] = value;
    }else{
        rear++;
        queue[rear] = value;
    }
}

void delete(){
    if(front == -1 && rear == -1){
        printf("Under flow");
    }
    else if(front == rear){
        printf("the deleted element %d",queue[front]);
        front = rear = -1;
    }else{
        printf("The deleted element is %d",queue[front]);
        front++;
    }
}

