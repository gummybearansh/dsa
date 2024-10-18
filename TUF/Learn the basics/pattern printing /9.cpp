#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // copied from 7 and 8 
    // printing both simply 
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