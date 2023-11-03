#include<stdio.h>
#include<conio.h>
int main(){
    int a[100][100],b[100][100],c[100][100],m,n,i,j;
    printf("Enter the no of row and col");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of A");
    i=0;
    do{
        j=0;
        do{
            scanf("%d",&a[i][j]);
            j++;
        }while(j<n);
        i++;
    }while(i<m);
    printf("Enter the elements of B");
    i=0;
    do{
        j=0;
        do{
            scanf("%d",&b[i][j]);
            j++;
        }while(j<n);
        i++;
    }while(i<m);
    i=0;
    while(i<m){
        j=0;
        while(j<n){
            c[i][j]=a[i][j]+b[i][j];
            j++;
        }
        i++;
    }
    i=0;
    do{
        j=0;
        do{
            printf("%d  ",c[i][j]);
            j++;
        }while(j<n);        
        printf("\n");
        i++;       
    }while(i<m);

}