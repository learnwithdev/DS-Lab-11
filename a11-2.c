#include <stdio.h>

int partition(int arr[7], int st, int end){
    // int st=0;
    int pivot = arr[end];

    int j=-1;
    for (int i=0; i<=end; i++){
        if (arr[i]<=pivot){
            j++;
            if (j!=i){
                arr[j] = arr[j]^arr[i];
                arr[i] = arr[j]^arr[i];
                arr[j] = arr[j]^arr[i];
            }
        }
    }

    return j;
}

void quickSort(int arr[7], int st, int end){
    if(st<end){
        int pivot = partition(arr, st, end); 
        
        quickSort(arr, st, pivot-1);
        quickSort(arr, pivot+1, end);
    }
}

void main(){
    int arr[7] = {3,5,1,2,7,6,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int st=0, end=size-1;

    quickSort(arr, st, end);

    printf("Quick Sort: ");
    for ( int i=0; i<=end; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
