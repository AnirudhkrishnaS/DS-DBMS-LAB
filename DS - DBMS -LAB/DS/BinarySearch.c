#include<stdio.h>


void main(){
    int first , last , mid , n , search , array[100],i;
    printf("Enter the number of elements :");
    scanf("%d" , &n);
    printf("Enter %d Elements :",n);
    for(i = 0 ; i<n ; i++){
        scanf("%d" , &array[i]);
    }

    printf("Enter the value to find : \n");
    scanf("%d" , &search);
    first = 0;
    last  = n-1;
    while(first<=last){
            mid = (first+last)/2;

        if(search>array[mid]){
            first = mid+1;
        }
        else if(array[mid] == search){
            printf("%d found at location %d \n" , search , mid+1);
            break;
        }
        else{
            last = mid-1;
        }

        if(first>last){
            printf("Not found ! %d is not present in the list \n",search);
        }
    }

}