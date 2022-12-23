#include<stdio.h>
void main(){
    int n,a[30],posi[15],negi[15],p=0,ni=0;
    printf("enter the number of elements :\n");
    scanf("%d",&n);
    printf("enter the elements of the array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        if(a[i]>0){
            posi[p]=a[i];
            p++;
        }
        else if(a[i]<0){
            negi[ni]=a[i];
            ni++;
        }
    }

    printf("the positive integers are : ");
    for(int i=0;i<p;i++) printf("%5d",posi[i]);
    printf("\n");
    printf("the negative integers are : ");
    for(int i=0;i<ni;i++) printf("%5d",negi[i]);
}
