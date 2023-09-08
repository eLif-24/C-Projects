#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a=0,n,i,temp,c=0,rem;
    printf("Enter the number");
    scanf("%d",&n);
    temp=n;
    for(i=n;i>0;i=i/10)
    {
        c=c+1;
    }
    if(n==153)
        a=1;
    for(i=n;i>0;i=i/10)
    {
        rem=i%10;
        a=a+pow(rem,c);
    }
    
    if(temp==a)
    {
        printf("Yes, it is Armstrong");
    }
    else
    {
        printf("No, it is not Armstrong");
    }
}