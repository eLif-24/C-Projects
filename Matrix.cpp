#include<stdio.h>
#include<conio.h>
int main(){
    int a[100][100],i,j,row,col;
    printf("Enter the no of rows and col");
    scanf("%i%i",&row,&col);
    printf("Enter the elements of matrix");
    i=0;
    while(i<row)
    {
        j=0;
        while(j<col)
        {
            scanf("%d",&a[i][j]);
            j++;
        }
        i++;
    }
    i=0;
    while(i<row)
    {
        j=0;
        while(j<col)
        {
            printf("%d\t",a[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}