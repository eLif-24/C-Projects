#include<stdio.h>
#include<conio.h>
int fib(int);
int main(){
    int i,n;
    printf("Enter the no of terms");
    scanf("%i",&n);
    for(i=1;i<=n;i++)
        printf("%d  ",fib(i));
}
int fib(int i){
    if(i==1)
        return 0 ;
    else{
        if(i==2)
            return 1;
        else
            return fib(i-1) + fib(i-2);
    }

}