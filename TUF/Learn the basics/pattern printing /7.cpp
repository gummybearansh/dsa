#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // outer loop to get rows 
    for (int i = 0; i < n; i++){
        // first print n spaces, n-1 spaces, n-2 spaces...
        for (int j = n; j > 1+i; j--){
            cout << " ";
        }
        // now print stars: 1, 3, 5, 7... 
        for (int j = 0; j < (i*2)+1; j++){
            cout << "*";
        }
        cout << endl;
    }
}