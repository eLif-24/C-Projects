#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float i,n,sum=0;
    printf("Enter the no of terms");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/(pow(i,2)));
    }
    printf("%f",sum);
}