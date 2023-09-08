#include<stdio.h>
#include<conio.h>
int main()
{
    int no,rev=0,temp,i,rem;
    printf("Enter the number");
    scanf("%d",&no);
    temp=no;
    for(i=no;i>0;i=i/10)
    {
        rem=i%10;
        rev=rev*10+rem;
    }
    if(temp==rev)
    {
        printf("The number is palindrome");
    }
    else
    {
        printf("The number is not palindrome");
    }
}    