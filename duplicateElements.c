#include<stdio.h>
void main(){
    int n,a[30],d=0;
    printf("enter the number of elements :\n");
    scanf("%d",&n);
    printf("enter the elements of the array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                d++;
                break;
            }
        }
    }
    printf("there are %d duplicate elements in the array.",d);
}