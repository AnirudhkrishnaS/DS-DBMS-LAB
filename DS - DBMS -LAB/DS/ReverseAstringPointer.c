#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str1[100] , str2[100];
    char *p1 , *p2 ;
    printf("Enter your String \n");
    gets(str1);
    p1 = str1 + strlen(str1) - 1;
    p2 = str2;

    while(p1>=str1){
        *p2  = *p1;
        p2++;
        p1--;
    }
    
    *p2 = '\0';
    printf("The reverse of given string : %s" , str2);
}