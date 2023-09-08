//Equilateral angle triangle pattern
#include<stdio.h>
#include<conio.h>
int main()
{
    int A,i,j,k;
    printf("Enter the no of Rows");
    scanf("%i",&A);
    for(i=1;i<=A;i++)
    {
        for(k=1;k<=A-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}