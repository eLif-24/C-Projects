#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,a=0,b;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            b=i%j;
            if(b==0)
            {
                a=1;
                break;
            }
            
        }
        if(a==0)
            printf("%d \n",i);
        a=0;        
    }
    /*if(a==0)
    {
        printf("It is a prime number"); 
    }
    else
    {
        printf("It is not a prime number");
    }*/
}