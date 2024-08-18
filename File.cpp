#include<stdio.h>
#include<conio.h>
int main(){
    FILE *p;
    char ch;
    printf("Write some text\n");
    p=fopen("Test.txt","w");
    while((ch=getchar())!=EOF){
        putc(ch,p);
    }
    fclose(p);
    p=fopen("Test.txt","r");
    while ((ch=getc(p))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(p);  
    
}