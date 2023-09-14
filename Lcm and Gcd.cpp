#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i,a,b,gcd,lcm;
    printf("Enter the numbers a & b");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
            gcd=i;
    }
    lcm=(a*b)/gcd;
    printf("GCD is %d\n",gcd);
    printf("LCM is %d",lcm);
    
}