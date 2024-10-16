#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // initialization, condition, increment.
    // variable -> 'iterator'

    for (int i = 0; i < n; i++){
        cout << i << endl;
        cout << "Hello, world\n";
    }
}