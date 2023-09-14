#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a[100],sum=0;
    printf("Enter the no of elements");
    scanf("%i",&n);
    for(i=0;i<n;i++)
    {
        scanf("%i",&a[i]);
        sum=sum+a[i];
    }
    printf("The sum is %i",sum);
}