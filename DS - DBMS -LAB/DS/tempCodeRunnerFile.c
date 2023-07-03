
 void sort(){
    int item;
    struct node *temp , *min , *ptr;
    if(head == NULL){
        printf("List is empty :(");
    }else{
        temp = head;
        while(temp!= NULL){
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
