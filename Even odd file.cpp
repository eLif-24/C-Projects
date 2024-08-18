#include<stdio.h>
#include<conio.h>
int main(){
    FILE *i,*o,*e;
    char ch;
    printf("Give some integers for Input file\n");
    i=fopen("Input.txt","w");
    
    while((ch=getchar())!=EOF){
        putw(ch,i);
    }
    fclose(i);
    
    i=fopen("Input.txt","r");
    e=fopen("Even.txt","w");
    o=fopen("Odd.txt","w");
    while ((ch=getw(i))!=EOF)
    {
        if(ch%2==0)
            putw(ch,e);
        else
            putw(ch,o);
    }
    fclose(i);
    fclose(e);
    fclose(o);
    printf("Odd numbers\n");  
    o=fopen("Odd.txt","r");
    while ((ch=getw(o))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(o);
    printf("\n");
    printf("Even numbers\n");
    e=fopen("Even.txt","r");
    while ((ch=getw(e))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(e);
    
}