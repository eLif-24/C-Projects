#include<stdio.h>
#include<conio.h>
int main(){
    FILE *p,*f;
    char ch;
    printf("Copied Text from Previous file\n");
    f=fopen("Copy.txt","w");
    p=fopen("Test.txt","r");
    while((ch=getc(p))!=EOF){
        putc(ch,f);
    }
    fclose(p);
    fclose(f);
    f=fopen("Copy.txt","r");
    while ((ch=getc(f))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(p);  
    
}