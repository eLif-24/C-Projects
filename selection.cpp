#include<stdio.h>
#include<conio.h>
int main(){
    int a[100],i,j,n,min,temp;
    printf("Enter the no of term");
    scanf("%d",&n);
    printf("Enter the values");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min])
                min=j;
        }
        if(min!=i){
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    printf("The sorted array is as follows\n");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
}