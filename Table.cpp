#include<stdio.h>
#include<conio.h>
int main()
{
    int A,B;
    printf("Enter the number");
    scanf("%d",&A);
    for(B=1;B<=10;B++)
    {
        printf("%d X %d = %d\n", A,B,A*B);
    }
}