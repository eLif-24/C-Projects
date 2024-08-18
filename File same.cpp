#include<stdio.h>
#include<conio.h>
int main(){
    FILE *o,*e;
    char ch1,ch2;
    printf("Content of file 1\n");  
    o=fopen("Odd.txt","r");
    while ((ch1=getw(o))!=EOF)
    {
        printf("%c",ch1);
    }
    fclose(o);
    printf("\n");
    printf("content of file 2\n");
    e=fopen("Even.txt","r");
    while ((ch2=getw(e))!=EOF)
    {
        printf("%c",ch2);
    }
    fclose(e);
    e=fopen("Even.txt","r");
    o=fopen("Odd.txt","r");
    do{
        ch1=getw(e);
        ch2=getw(o);
    }while(ch1==ch2 && ch1!=EOF && ch2!=EOF);
    fclose(o);
    fclose(e);
    printf("\n");
    if(ch1==EOF && ch2==EOF)
        printf("Content are same");
    else
        printf("Content are not same");

    
}