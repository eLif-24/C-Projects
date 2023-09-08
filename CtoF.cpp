#include<stdio.h>
#include<conio.h>
int main()
{
int A,B,C,D;
printf("Enter the temperature in Celsius");
scanf("%d",&A);
B=(9*A/5)+32;

printf("The temperature in Fahrenheit is %d\n",B);
printf("Enter the temperature in Fahrenheit");
scanf("%d",&C);
D=((C-32)*5)/9;
printf("The temperature in Clesius is %d",D);
}