#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int array[], int size) {

    for(int x=0; x<size-1; x++){
        for(int i=0; i<size-1; i++){
            if(array[i]>array[i+1]){
                swap(array[i], array[i+1]);
            }
        }
    }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
}

int main() {
  int arr[] = {6,2,9,7,4,1};
  
  int size = sizeof(arr) / sizeof(arr[0]);
  
  bubbleSort(arr, size);
  
  cout << "Sorted Array: ";  
  printArray(arr, size);
}