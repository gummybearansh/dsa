#include <iostream>
using namespace std;

int main(){
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter number to be found: ";
    cin >> x;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] == x){ 
            cout << "found";
            return 0;
        }
    }

    cout << "Not found";
    return 1;
}