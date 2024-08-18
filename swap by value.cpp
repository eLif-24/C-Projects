#include<stdio.h>
#include<conio.h>
void swap(int,int);
int main(){
    int a,b;
    printf("Enter the numbers");
    scanf("%d%d",&a,&b);
    printf("A = %i\n",a);
    printf("B = %i\n",b);
    swap(a,b);

}
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("The swapped no are as follows\n");
    printf("A = %i\n",a);
    printf("B = %i\n",b);
}