#include<stdio.h>
#include<conio.h>
int sum(int);
int main(){
    int i,a;
    printf("Enter the no");
    scanf("%i",&a);
    i=sum(a);
    printf("The sum of digit is %i",i);
}
int sum(int a){
    if(a!=0)
        return (a%10) + sum(a/10);
    else    
        return 0;
}