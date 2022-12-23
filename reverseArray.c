#include<stdio.h>
void main(){
    int n,a[30];
    printf("enter the number of elements :\n");
    scanf("%d",&n);
    printf("enter the elements of the array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("the reverse of the given array is :\n");
    for(int i=n-1;i>=0;i--){
        printf("%d\n",a[i]);
    }
}