#include<stdio.h>
#include<conio.h>

int main(){
    int i,l,j,n,k;
    printf("Enter the no of Rows");
    scanf("%i",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)
            printf(" ");
        l=1;
        for(k=1;k<=i;k++){
            printf("%d ",l);
            l=(l*(i-k))/k;
            
        }
        printf("\n");
    }
}