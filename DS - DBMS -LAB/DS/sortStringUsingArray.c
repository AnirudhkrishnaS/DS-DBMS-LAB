#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){

    int i , j , count ;
    char str[25][25] , temp[25];
    printf("Enter no of strings : \n");
    scanf("%d", &count);
    printf("\n Enter the string One by One \n");
    for(i = 0; i<=count ; i++){
        gets(str[i]);
    }
    for(i = 0 ; i<=count;i++){
        for(j = i+1 ; j<=count ; j++){
            if(strcmp(str[i] , str[j])>0){
                strcpy(temp , str[i]);
                strcpy(str[i] , str[j]);
                strcpy(str[j] , temp);
            }
        }
    }
    printf("The order of sorted String :");
    for(i = 0 ; i<=count ; i++){
        puts(str[i]);
    }
    
}