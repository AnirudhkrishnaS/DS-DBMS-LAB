#include<stdio.h>
int stack[50];
int top = -1 , n;
void display();
void pop();
void push();
void exit();


void main(){
    int ch;
    printf("Enter the size of the stack :\n");
    scanf("%d",&n);
    do{
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : push();
            break;

            case 2 : pop();
            break;

            case 3 : display();
            break;

            case 4 : exit(0);
            break;

            default : printf("Wrong choice \n");
        }
        
    }while(ch!=0);

}

void push(){
    int value;
    printf("Enter data to insert :");
    scanf("%d",&value);
    if(top == n-1){
        printf("\nover flow ...\n");
    }else{
        top++;
        stack[top] = value;
    }

}



void pop(){
    int value;
    if(top == -1){
        printf("Under flow..");

    }else{
        value = stack[top];
        top--;
        printf("The popped element = %d" , value);

    }

}



void display(){
    int i;
    if(top == -1){
        printf("Stack is empty .. ");

    }else{
        printf("The stack is ..");
        for(i = top ; i>=0 ; i--){
            printf("%d \n",stack[i]);
        }
    }

}