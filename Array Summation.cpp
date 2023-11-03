#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a[100],sum=0;
    printf("Enter the no of elements\n");
    scanf("%i",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%i",&a[i]);
        sum=sum+a[i];
    }
    printf("The sum is %i",sum);
}