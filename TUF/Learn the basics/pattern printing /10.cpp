#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    // print left pyramid 
    for (int i = 0; i < n; i++){
        for (int j = 0; j <=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    // print ulta pyramid with n-1
    n--;
    for (int i = n; i > 0; i--){
        for (int j = i; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }
}