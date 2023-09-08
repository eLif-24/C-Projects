#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0,b=1,n,i,c;
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        
    }

}