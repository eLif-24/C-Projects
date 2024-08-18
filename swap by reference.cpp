#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
int main(){
    int a,b;
    int *p,*q;
    printf("Enter the numbers");
    scanf("%d%d",&a,&b);
    printf("A = %i\n",a);
    printf("B = %i\n",b);
    p=&a;
    q=&b;
    swap(p,q);

}
void swap(int *p,int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("The swapped no are as follows\n");
    printf("A = %i\n",*p);
    printf("B = %i\n",*q);
}