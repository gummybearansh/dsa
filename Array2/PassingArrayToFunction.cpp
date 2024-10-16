#include <iostream>
using namespace std;

void display(int b[]){
    for (int i = 0; i < 5; i++){
        cout << b[i] << ' ';
    }
    cout << endl;
}

void update(int a[]){
    // update array by 1 and print updated array 
    for (int i = 0; i < 5; i++){
        a[i] ++;
    }
    display(a);
}

int main(){
    // make array
    int arr[] = {1, 2, 3, 4, 5};

    // print actual array 
    cout << "Actual array: " << endl;
    display(arr);

    cout << "Updated array: " << endl;
    update(arr);

    // print actual array that was passed 

    cout << "Final array: " << endl;
    display(arr);
}