#include <stdio.h>
int main () {
    int n;
    scanf ("&d", &n) ;
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("&d", &arr[i]);
    }
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}
void bubbleSort(int arr, int n){
    int new_arr[];
    for(int i=0,i<n,i++){
        print("%d",arr[i])
    }
}