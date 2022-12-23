#include<stdio.h>
void main(){
    int a[30],x,times=0,n;
    printf("enter the number of elements :\n");
    scanf("%d",&n);
    printf("enter the elements of the array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter item to be searched : ");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        times++;
        if(a[i]==x){
            break;
        }
    }
    printf("\narray checked %d times",times);
}