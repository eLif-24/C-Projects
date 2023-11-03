#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a[100],max,min;
    printf("Enter the no of elements");
    scanf("%i",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
        scanf("%i",&a[i]);
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    printf("The biggest no is %i\n",max);
    printf("The smallest no is %i\n",min);
}
    