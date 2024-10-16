#include <iostream>
using namespace std;

int main(){
    // input number of elements of array
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    // input elements of array
    int arr[n];
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // output array
    for (int i = 0; i < n; i++){
        cout << arr[i] + 1 << ' ';
    }
}