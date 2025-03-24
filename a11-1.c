#include <stdio.h>

void main(){
    int arr[5] = {3,4,5,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int j, temp;

    for (int i=1; i<n; i++){
        j = i-1;
        while (j>=0 && arr[j]>arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            j--;
        }
    }

    printf("Insertion Sort: ");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}