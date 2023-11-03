#include<stdio.h>
#include<conio.h>
int main(){
    int a[100][100],i,j,col,row,k;
    printf("Enter the no of rows and col");
    scanf("%i%i",&row,&col);
    if(row!=col)
        printf("Not a square matrix");
    else{
        printf("Enter the elements of matrix");
        i=0;
        do{
            j=0;
            do{
                scanf("%d",&a[i][j]);
                j++;}
            while(j<col);
            i++;}while(i<row);
        printf("Lower Triangle\n");
        i=0;
        do{            
            j=0;
            do{
                if(i>=j){
                printf("%d  ",a[i][j]);}
                j++;}while(j<col);
            printf("\n");            
            i++;}while(i<row);
        printf("Upper Triangle\n");
        i=0;
        do{
            for(k=1;k<=i;k++)
                printf("   ");
            j=0;
            do{
                if(i<=j){
                printf("%d  ",a[i][j]);}
                j++;}while(j<col);
            printf("\n");            
            i++;}while(i<row); 
    }
}