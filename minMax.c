#include<stdio.h>
void main(){
int n,a[30],min,max=0;
    printf("enter the number of elements :\n");
    scanf("%d",&n);
    printf("enter the elements of the array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];
    for (int i=0;i<n;i++){
        if(max<a[i])max=a[i];
            if(min>a[i])min=a[i];
    }
    printf("the maximum and minimum element of the array is %d and %d", max, min);
}