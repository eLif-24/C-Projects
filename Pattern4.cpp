//Right angle no pattern
#include<stdio.h>
#include<conio.h>
int main()
{
    int A,i,j,n,k;
    printf("Enter the no of Rows");
    scanf("%i",&A);
    n=1;
    for(i=1;i<=A;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }
    //Inverse Right angle no pattern
    k=1;
    for(i=1;i<=A;i++)
    {
        for(j=A;j>=i;j--)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");    
    }
}