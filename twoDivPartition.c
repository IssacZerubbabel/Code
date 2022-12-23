#include<stdio.h>
void divTest(int arr[],int n){
    int odd[15],even[15],o=0,e=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            odd[o]=arr[i];
            o++;
        }
        else if(arr[i]%2==0){
            even[e]=arr[i];
            e++;
        }
    }

    printf("the odd numbers are : ");
    for(int i=0;i<o;i++) printf("%5d",odd[i]);
    printf("\n");
    printf("the even numbers are : ");
    for(int i=0;i<e;i++) printf("%5d",even[i]);

}
void main(){
    int n,a[30];
    printf("enter the number of elements :\n");
    scanf("%d",&n);
    printf("enter the elements of the array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    divTest(a,n);
}
