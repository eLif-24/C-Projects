#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *p;
    char ch,str1[10],str2[10];
    int count=0;
    printf("Content of file\n");
    p=fopen("Test.txt","r");
    while ((ch=getc(p))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(p);
    printf("\n");
    printf("Write some text\n");
    gets(str1);
    p=fopen("Test.txt","r");
    while(!feof(p)){
        fscanf(p,"%s",str2);
        if(!strcmp(str1,str2))
            count++;
    }
    if(count==0)
        printf("%s does not exist",str1);
    else
        printf("%s exists with %d occurence",str1,count);
    fclose(p);
}
    