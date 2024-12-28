#include "sort.h"

int main(){
    cout << "enter number of elements: ";
    int size;
    cin >> size;
    int arr[size];
    for(int i =0; i < size ; i ++){
        cout << "enter " << i << " element of array: ";
        int e;
        cin >> e;
        arr[i] = e;
    }
    cout << "hello world" << endl;
    SortAndPrint(arr,size);
}