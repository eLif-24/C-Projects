#include<stdio.h>
#include<conio.h>
#include<math.h>
int armstrong(int,int);
int main()
{
    int a=0,n,i,temp,c=0;
    printf("Enter the number");
    scanf("%d",&n);
    temp=n;
    for(i=n;i>0;i=i/10)
    {
        c=c+1;
    }
    a=armstrong(n,c);
    if(a==temp)
        printf("It is an armstrong number");
    else
        printf("It is not an armstrong number");

}
int armstrong(int n,int c){
    if(n>0)
        return pow(n%10,c)+armstrong(n/10,c);
    else 
        return 0;   
    
}