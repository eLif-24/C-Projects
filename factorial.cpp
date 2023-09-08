#include<stdio.h>
#include<conio.h>
int main()
{
    int A,B,C=1;
    printf("Enter the number");
    scanf("%d",&A);
    B=1;
    do
    {
        C=B*C;
        B++;
    }
    while(B<=A);
    
    printf("The Factorial is %d",C);
}