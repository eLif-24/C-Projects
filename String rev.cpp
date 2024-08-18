#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char a[100],b[100];
    int i,j;
    printf("Enter the string\n");
    gets(a);
    j=strlen(a);
    i=0;
    do{
        b[j-i-1]=a[i];
        i++;
    }while(i<j);
    b[j]='\0';
    puts(b);
}