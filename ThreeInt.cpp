#include<stdio.h>
#include<conio.h>
int main()
{
    float A,B,C;
    printf("Enter the values of A, B and C");
    scanf("%f%f%f",&A,&B,&C);
    if(A>B)
    {
        if(A>C)
        {
            printf("A is the greatest number");
        }
        else
        {
            printf("C is the greatest number");
        }
    }
    else     
    {
        if(B>C)
        {
            printf("B is greatest number");
        }
        if(B<C)
        {
            printf("C is greatest number");
        }
    }
    if(A==B)
    {
        if(B==C)
        {
            printf("A, B, C are all equal");
        }
    }
    return 0;    
}