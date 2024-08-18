#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char a[100];
    int i,l;
    printf("Enter the Sentence\n");
    gets(a);
    l=0;
    i=0;
    do{
        l++;
        i++;
    }while(a[i]!='\0');
    printf("The length of string is %i",l);
}