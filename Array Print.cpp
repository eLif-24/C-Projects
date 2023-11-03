#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],i,n;
    printf("Enter the no of elements");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The elements are as follows\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}