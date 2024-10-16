#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        // basically array is at most 'k' reverses
        // if k is minimum 2 
        // we can swap every other element 
        if (is_sorted(arr, arr + n) || k > 1){
            cout << "YES";
        } else cout << "NO";
        cout << endl;
    }
}