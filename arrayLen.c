//C program to calculate the length of an array using the sizeof() operator.
#include <stdio.h>
int main() {
    //simple array
    int arr[] = {19,25,10,3,1,8,22,17,7,84,9,19,25,10,3,1,
             8,22,17,7,84, 9,19,25,10,3,1,8,22,17,7,84,
             9,19,25,10,3,1,8,22,17,7,84,9,19,25,10,33,
             1,8,22,17,7,84,9,19,25,10,3,1,8,22,17,7,84,
             9,19,25,10,3,1,8,22,17,7,84,9,11,23,45,5,3};

    //using sizeof() operator to get length of array
    printf(" The length of int array is : %d ", sizeof(arr) / sizeof(arr[0]));
}
