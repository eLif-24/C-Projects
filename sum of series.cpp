//sum of 9+99+999+9999....+n
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,c=0,t=9;
    printf("Enter the no of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=c+t;
        t=(t*10)+9;
    }
    printf("%d",c);
}