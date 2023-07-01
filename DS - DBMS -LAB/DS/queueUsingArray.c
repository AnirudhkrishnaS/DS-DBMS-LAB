#include<stdio.h>
#include<stdlib.h>
int queue[100];
int n;
int rear = -1 , front = -1;
void display();
void insert();
void delete();
void peek();

void main(){
    int choice ; 
    printf("Enter the size of the queue :\n");
    scanf("%d",&n);
    do{
        printf("\n1.INSERT\n");
        printf("\n2.DELETE\n");
        printf("\n3.DISPLAY\n");
        printf("\n4.EXIT\n");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 : insert();
            break;

            case 2 : delete();
            break;

            case 3 : display();
            break;

            case 4 : exit(0);
            break;

            default : printf("wrong choice");

        }

    }while(choice != 0);
}



void insert(){
    int value;
    printf("Enter the data to be inserted : \n");
    scanf("%d",&value);
if(rear == n-1){
    printf("queue is overflow .. ");
}else if(front == -1 && rear == -1){
    front = rear = 0;
    queue[rear] = value;
}else{
    rear++;
    queue[rear] = value;
}
}




void delete(){
if(front == -1 && rear == -1){
    printf("The deleted element is : %d\n",queue[front]);
    printf("under flow ..\n");
}
else if(front == rear){
    printf("The deleted element is : %d\n",queue[front]);
    front = rear = -1;
}
else{
    printf("The deleted element is : %d\n",queue[front]);
    front++;
}
}



void display(){
    int i;
    if(front == -1 && rear == -1){
        printf("Queue is empty .. \n");

    }else{
        for(i = front ; i<=rear ; i++){
            printf("\n %d \n",queue[i]);
        }

    }

}

void peek(){
    if(front == -1 && rear == -1){
        printf("Queue is empty");
    }else{
        printf("%d",queue[front]);
    }
}


