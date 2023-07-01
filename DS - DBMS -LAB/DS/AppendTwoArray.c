#include<stdio.h>
void main(){
    int arr1[100] , arr2[200] , size1=0 , size2=0 , i=0 , k=0 , merge[100];
    printf("Enter array 1 size\n\n");
    scanf("%d" , &size1);
    printf("Enter array 1 Elements :\n");
    for(i=0; i<size1; i++){
        scanf("%d" , &arr1[i]);
        merge[i] = arr1[i];
    }
    k=i;
    printf("Enter array two size :");
    scanf("%d" , &size2);
    printf("Enter array2 Elements  \n");
    for(i = 0;i<size2;i++){
        scanf("%d",&arr2[i]);
        merge[k] = arr2[i];
        k++;
    }
    printf("\n Array after merging :\n");
    for(i = 0; i<k ;i++)
    printf("%d\t",merge[i]);




}