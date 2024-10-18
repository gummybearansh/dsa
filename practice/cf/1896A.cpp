#include <iostream>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int arr[n]; 
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        // didnt get it myself 
        // its actually a simple bubble sort question 
        // if arr[i+1] > arr[i] and we swap it 
        // at the end we'll get the largest element to the end
        // the only way this solution doesnt work 
        // is if first element is not 1 
        // because of constraint : 
        //      i >= 2

        if (arr[0] != 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }    
}