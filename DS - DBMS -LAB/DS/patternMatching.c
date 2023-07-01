#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
    char str[100] , pat[20];
    int lenstr , lenpat ,max , index , i , j;
    printf("Enter the text string\n");
    gets(str);
    printf("Enter pattern to search\n");
    gets(pat);
    lenstr  = strlen(str);
    lenpat = strlen(pat);
    max = lenstr = lenpat +1;
    i = 1;
    while(i <= max){
        for(j = 0 ; j <lenpat ; j++){
            if(pat[j]!= str[i+j-1]){
                goto lab;
            }
        }
        index = i;
        printf("pattern found at %d", index);
        exit(0);


        lab:i++;
    }
    printf("String pattern dosen't present in the given text");
    
    

    }