#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;

    // rows
    for (int i = 0; i < n; i++){
        // spaces 0, 1, 2...
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        // stars -> (totalRows-i)*2-1
        for (int j = ((n-i)*2)-1; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }
}