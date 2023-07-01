#include<stdio.h>
void main(){
    int arr[50] , i , j , temp , n , key;
    printf("Enter the number of elements :\n");
    scanf("%d" , &n);
    printf("Enter %d numbers : \n" , n);
    for(i = 0 ; i<n ; i++){
        scanf("%d" , &arr[i]);
    }

    for(i = 1 ; i<n ; i++){
        temp = arr[i];
        j = i - 1;
        while(j>= 0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    printf("The Sorted array is :\n");
    for(i = 0 ; i<n ; i++){
        printf("%d\t" , arr[i]);
    }
}