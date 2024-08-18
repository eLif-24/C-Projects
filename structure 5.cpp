#include<stdio.h>
#include<conio.h>
struct student{
    char name[20];
    int roll;
    int marks;
};
int main(){
    struct student a[5];
    int i;
    for(i=0;i<5;i++){
        printf("Enter the details of %d student\n",i+1);
        gets(a[i].name);
        scanf("%d",&a[i].roll);
        scanf("%d",&a[i].marks);
    }
    printf("Details of student are:\n");
    for(i=0;i<5;i++){
        printf("\n Name:%s",a[i].name);
        printf("\n Roll no:%d",a[i].roll);
        printf("\n Marks:%d",a[i].marks);
    }
    
}
