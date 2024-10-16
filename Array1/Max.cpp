#include <iostream>
using namespace std;

int main(){
    int n; 
    cout << "Enter number of elements in array: ";
    cin >> n;
    int arr[n];

    int max = INT_MIN;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] > max) max = arr[i];
    }
    cout << "max in array: " << max;
}