#include<stdio.h>
void main(){
    int size,temp,arr[30];
    printf("enter the number of elements :\n");
    scanf("%d",&size);
    printf("enter the elements of the array :\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<size;j++){
        int k=0;
        for(;k<size;k++){
            if(arr[k]>arr[k+1]){
                temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
    printf("the second maximum element in the array is %d",arr[size-2]);
}