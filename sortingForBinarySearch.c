#include<stdio.h>
int binsearch(int a,int arr[],int last, int first){
    if(last>=first){
        int mid=(last+first)/2;
        if(arr[mid]==a) return mid;
        if (arr[mid]<a) return binsearch(a,arr,last,mid+1);
        if(arr[mid]>a) return binsearch(a,arr,mid-1,first);}
    return -1;}

void main(){
    int arr[100];
    int size,temp,ele;
    printf("enter size of array : ");
    scanf("%d",&size);
    printf("enter the elements\n");
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
    printf("the sorted array is : ");
    for(int i=0;i<size;i++){
        printf("%d.",arr[i]);
    }
    printf("\n");
    printf("enter element to be searched");
    scanf("%d",&ele);
    int result=binsearch(ele,arr,size,0);
    if (result==-1)printf("element not found");
    else printf("element found");
}