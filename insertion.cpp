#include<stdio.h>
#include<conio.h>
int main(){
    int a[100],i,j,n,key;
    printf("Enter the no of term");
    scanf("%d",&n);
    printf("Enter the values");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        key=a[i];
        for(j=i-1;j>=0 && a[j]>key;j--)
            a[j+1]=a[j];
        a[j+1]=key;
    }



    printf("The sorted array is as follows\n");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
}