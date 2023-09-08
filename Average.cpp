#include<stdio.h>
#include<conio.h>
int main()
{
float A,B,C,D,E,F;
printf("Enter the marks of Mathematics");
scanf("%f",&A);
printf("Enter the marks of English");
scanf("%f",&B);
printf("Enter the marks of Physics");
scanf("%f",&C);
printf("Enter the marks of Chemistry");
scanf("%f",&D);
printf("Enter the marks of Computer Science");
scanf("%f",&E);
F=(A+B+C+D+E)/5;
printf("The average of your 5 subjects is %f",F);
}