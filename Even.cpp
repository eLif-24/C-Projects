#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i;
    printf("Enter the number");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
    for(i=1;i<=N;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
}