#include <iostream>
using namespace std;

int main(){
    int arr[5];

    cout << "array's own index: " << &arr;

    for (int i = 0; i < 5; i++){
        cout << &arr[i] << endl;
    }

    cout << "Major note\n";
    cout << "arr: " << arr << endl;
    cout << "&arr: " << &arr << endl;
    cout << "&arr[0]: " << &arr[0] << endl;
}