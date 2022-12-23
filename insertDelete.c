#include<stdio.h>
void insert(int *arr[],int size){
    int ins,loc;
    printf("enter element and location of the element to be inserted : \n");
    scanf("%d %d",&ins,&loc);
    for(int i=size-1;i>=loc-1;i--){
        arr[i+1]=arr[i];
    }
    arr[loc-1]=ins;
    printf("the updated array is : \n");
    for(int i=0;i<size+1;i++){
        printf("%d  ",arr[i]);
    }
}

void delete(int *arr[],int size){
    int loc;
    printf("enter location of the element to be deleted : \n");
    scanf("%d",&loc);
    for(int i=loc-1;i<size;i++){
        arr[i]=arr[i+1];
    }
    printf("the updated array is : \n");
    for(int i=0;i<size-1;i++){
        printf("%d  ",arr[i]);
    }
}

void main(){
    int n,a[30],choice;
    printf("enter the number of elements :\n");
    scanf("%d",&n);
    printf("enter the elements of the array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("what do u want to do?\n\t1 -> insert element\n\t2 -> delete element\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:insert(&a,n);break;
        case 2:delete(&a,n);break;
        default:printf("invalid option");
    }
}