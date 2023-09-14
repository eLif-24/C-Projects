#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a[100],max;
    printf("Enter the no of elements");
    scanf("%i",&n);
    for(i=0;i<n;i++)
        scanf("%i",&a[i]);
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("The biggest no is %i",max);
}
    