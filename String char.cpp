#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char a[100];
    int i,c=0,v=0;
    printf("Enter the string\n");
    gets(a);
    i=0;
    do{
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
            v++;
            i++;
        }
        else{
            if(a[i]==' ')
                i++;
            else{
                c++;
                i++;
            }
        }
    }while(a[i]!='\0');
    printf("No of Vowels are %i\n",v);
    printf("No of consonants are %i\n",c);
}