#include<stdio.h>
#include<conio.h>
int main(){
    int a[100],n,item,low,high,i,mid;
    printf("Enter the no of terms\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the required item\n");
    scanf("%d",&item);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]>item)
            high=mid-1;
        else{
            if(item>a[mid])
                low=mid+1;
            else{
                if(a[mid]==item){
                    printf("Item found at %d",mid+1);
                    break;
                }
            }
        }
    }  
}
