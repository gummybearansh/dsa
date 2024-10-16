#include <iostream>
using namespace std;

int main(){

    // some bug makes last row print 0 ??
    
    int n;
    cout << "Enter height: ";
    cin >> n;
    int curr = 1;
    for (int i = 0; i <= n; i++){
        curr = 1;
        for (int j = 0; j <= i; j++){
            cout << curr << ' ';
            curr = curr * ((i - j) / (j + 1));
        }

        cout << '\n';
    }
}