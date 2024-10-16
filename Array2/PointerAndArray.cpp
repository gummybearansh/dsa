#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    // printing array by just name gives pointer to array
    cout << arr << endl;

    int* ptr = arr;
    // pointer of array 
    cout << "Pointer to array1: " << ptr << endl;
    
    int* ptr2 = &arr[0];
    // pointer of array is same as address of first element of array 
    cout << "Pointer to first element of array: " << ptr2 << endl;

    // pointer name can be used to index into array like normal 
    for(int i = 0; i < 5; i++){
        cout << ptr[i] << ' ';
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << ptr2[i] << ' ';
    }
    cout << endl;
    // using pointer arithematic to print array
    // *ptr goes to element and prints it, +i increments pointer 
    for(int i = 0; i < 5; i++){
        cout << *(ptr + i) << ' ';
    }
    cout << endl;
}