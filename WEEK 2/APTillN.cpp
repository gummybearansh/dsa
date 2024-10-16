#include <iostream>
using namespace std;

int main(){
    cout << "Enter num till AP: ";
    int n;
    cin >> n;

    // 1 3 5 7 9 ... 

    // last term will be a + (n - 1) d -> 1 + 2n - 2 -> 2n - 1
    // for (int i = 1; i <= 2 * n - 1; i += 2){
    //     cout << i << ' ';
    // }
    // cout << endl;

    int a = 1;
    for (int i = 0; i < n; i++){
        cout << a << ' ';
        a += 2;
    }
    
}