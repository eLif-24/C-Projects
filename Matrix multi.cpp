#include<stdio.h>
#include<conio.h>
int main(){
    int a[100][100],b[100][100],c[100][100],r1,r2,c1,c2,i,j,sum=0,k,n;
    printf("Enter the no of row and col of A");
    scanf("%d%d",&r1,&c1);
    printf("Enter the no of row and col of B");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
        printf("Matrix multiplication not possible");
    else{
        printf("Enter the elements of A");
        i=0;
        do{
            j=0;
            do{
                scanf("%d",&a[i][j]);
                j++;
            }while(j<c1);
            i++;
        }while(i<r1);
        printf("Enter the elements of B");
        i=0;
        do{
            j=0;
            do{
                scanf("%d",&b[i][j]);
                j++;
            }while(j<c2);
            i++;
        }while(i<r2);
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++)
                {
                    n=a[i][k]*b[k][j];
                    sum=sum+n;
                    c[i][j]=sum;                                        
                }
                sum=0;                
            }
        }
        printf("The multiplication is \n");
        i=0;
        do{
            j=0;
            do{
                printf("%d  ",c[i][j]);
                j++;
            }while(j<c2);
            printf("\n");
            i++;
        }while(i<r1);
    }
}