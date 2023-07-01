#include<stdio.h>
#include<string.h>

void main(){
    int arr[5] , i , j , temp , n , min;
    
    printf("Enter the number of elements :\n");
    scanf("%d" , &n);
    printf("Enter %d elements :\n" , n);
    for(i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n-1;i++){
        min = i;
        for(j=i+1 ; j<n; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        if(min!=i){
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }

    printf("The Sorted Array is :");
    for(i = 0 ; i<n; i++){
        printf("\t%d\t" , arr[i]);
    }
}