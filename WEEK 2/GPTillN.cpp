#include <iostream>
using namespace std;

int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;

    // 1 2 4 8 16 ...
    int a = 1;
    for (int i = 0; i < n; i++){
        cout << a << ' ';
        a *= 2;
    }
}