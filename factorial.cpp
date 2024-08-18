#include<stdio.h>
#include<conio.h>
int fact(int);
int main(){
    int i,n;
    printf("Enter the number");
    scanf("%i",&n);
    i=fact(n);
    printf("%d",i);
    
}
int fact(int n){
    if(n==0){
        return 1;
    }
    else    
        return n*fact(n-1);
}