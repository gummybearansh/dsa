#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        // first will win if number + or - 1 is divisible by 3 
        // otherwise second will win
        if ((n+1)%3 == 0 || (n-1)%3 == 0){
            cout << "First" << endl;
        } else cout << "Second" << endl;
    }
}