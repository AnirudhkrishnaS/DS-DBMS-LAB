#include<stdio.h>

void main(){
    int a[100] , n , i , j , size = 0 ,temp;
    printf("Enter the size of array :\n");
    scanf("%d" , &size);
    printf("Enter %d elements :",size);
    for(i=0;i<size;i++){
    scanf("%d" , &a[i]);
    }
    for(i = 0; i<size; i++){
        for(j=i+1;j<size;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }



    printf("Sorted array:\n");
    for(i =0;i<size;i++){
        printf("%d\t" , a[i]);
    }
}