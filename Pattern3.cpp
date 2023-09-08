//Right angle triangle
#include<stdio.h>
#include<conio.h>
int main()
{
    int A,i,j;
    printf("Enter the no of Rows");
    scanf("%i",&A);
    /*for(i=1;i<=A;i++)
    {        
        for(j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }*/
    //Inverse Right angle triangle
    for(i=1;i<=A;i++)
    {
        for(j=A;j>=i;j--)
            printf("* ");
        printf("\n");    
    }
}