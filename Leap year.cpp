#include<stdio.h>
#include<conio.h>
main()
{
    int n;
    printf("Enter the year");
    scanf("%d",&n);
    if(n%4==0)
        printf("The year is leap year");
    else
        printf("The year is not leap year");
    
}