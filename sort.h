#include <iostream>

using namespace std;

int temp = 0;
void SortAndPrint(int* array,int size){
    for(int i = 0 ; i < size ; i++){
        for(int j =i+1; j < size; j++){
            if(array[j] < array[i]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for(int i = 0 ; i < size ; i ++){
        cout << array[i] << endl;
    }
}