#include<stdio.h>
#include<conio.h>
int main()
{
    int A,B,C;
    float D;
    char ch;
    printf("Choose the desired operation\n");
    printf(" Add +\n Subtract -\n Multiply *\n Division /\n");
    scanf("%c",&ch);
    printf("Enter the two integers");
    scanf("%i%i",&A,&B);
    switch(ch)
    {
        case '+':
                C=A+B;
                printf("The sum of A and B is %i",C);
                break;
        case '-':
                C=A-B;
                printf("The difference of A and B is %i",C);
                break;
        case '*':
                C=A*B;
                printf("The multiplication of A and B is %i",C);
                break;
        case '/':
                C=A/B;
                printf("The division of A and B is %i",C);
                break;
        case '%':
                D=(float)A/B;
                printf("The modulus of A and B is %.2f",D);
                break;
        default:
                printf("Choose from above operation");        

    }  
}