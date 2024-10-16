#include <iostream>
using namespace std;

int main(){
    int n; 
    cout << "Enter number of elements in array: ";
    cin >> n;
    int arr[n];

    int max = INT_MIN, second_max = INT_MIN;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] > max){
            second_max = max;
            max = arr[i];
        }
        else if (arr[i] > second_max && arr[i] != max){
            second_max = arr[i]; 
        }
    } 
    
    cout << "Second largest: " << second_max << endl;
}