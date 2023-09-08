#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int i,n;
    printf("Enter the no");
    scanf("%i",&n);
    i=0;
    while(pow(2,i)<=n)
    {
        i++;
    }
    printf("%d",i-1);
}