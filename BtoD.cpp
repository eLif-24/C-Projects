#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i,n,sum=0,rem,x=0;
    printf("Enter the binary no");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        rem=i%10;
        sum=sum+(rem*pow(2,x));
        x++;
    }
    printf("%d",sum);
}