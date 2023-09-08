#include<stdio.h>
#include<conio.h>
int main()
{
    float A,B;
    printf("Enter the values of A and B");
    scanf("%f%f",&A,&B);
    if(A>B)
    {
        printf("A is greater than B");
    }
    else
    {
        if(A==B)
        {
            printf("A and B are equal");
        }
        else
        {
            printf("B is greater");
        }
    }    
        
        
}