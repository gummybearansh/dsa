#include <iostream>
using namespace std;

int main(){
    int n; 
    cout << "Enter number of students: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] < 35){
            cout << "Roll number of fail: "<< i << endl;
        }
    }
}