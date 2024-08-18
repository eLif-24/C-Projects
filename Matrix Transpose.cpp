#include<stdio.h>
#include<conio.h>
int main(){
    int a[100][100],b[100][100],i,j,col,row;
    printf("Enter the no of rows and col\n");
    scanf("%i%i",&row,&col);
    printf("Enter the elements of matrix\n");
    i=0;
    do{
        j=0;
        do{
            scanf("%d",&a[i][j]);
            j++;
        }while(j<col);
        i++;
    }while(i<row);
    i=0;
    do{
        j=0;
        do{
            b[j][i]=a[i][j];
            j++;
        }while(j<col);        
        i++;
    }while(i<row);
    printf("The transpose of matrix is\n");
    i=0;
    do{
        j=0;
        do{
            printf("%d ",b[i][j]);
            j++;
        }while(j<col);
        printf("\n");
        i++;
    }while(i<row);
}