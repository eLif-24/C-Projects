//kaju katli pattern

#include<stdio.h>
#include<conio.h>
int main()
{
    int A,i,j,k,m,l,t;
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
    m=1;
    while(m<=A)
    {
        t=0;
        while(t<=m)
        {
            printf(" ");
            t++;
        }

        l=A-1;
        while(l>=m)
        {
            printf("* ");
            l--;
        }
        printf("\n");
        m++;
    }
}