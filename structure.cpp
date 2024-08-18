#include<stdio.h>
#include<conio.h>
struct student{
    char name[20];
    int roll;
    char sec;
    float marks;
};
int main(){
    struct student a;
    printf("Enter the name\n");
    gets(a.name);
    printf("Enter the roll no\n");
    scanf("%i",&a.roll);
    scanf("%c",&a.sec);
    printf("Enter the marks\n");
    scanf("%f",&a.marks);
    printf("Name:%s\nRoll no:%d\nMarks:%f\n",a.name,a.roll,a.marks);
}
