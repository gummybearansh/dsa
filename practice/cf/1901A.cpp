#include <iostream>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while (t--){
        int n, x; 
        cin >> n >> x;
        int arr[n];
        // populating numberline array
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int minFuel = max(arr[0], 2*(x - arr[n-1]));
        // basically min fuel required is the maximum distance between two points on this number 
        for (int i = 1; i < n; i++){
           minFuel = max(minFuel, arr[i]-arr[i-1]); 
        }
        cout << minFuel << endl;
    }
}