#include <iostream>
using namespace std;

int main(){
    cout << "Enter a number to check prime: ";
    int n;
    cin >> n;
    bool flag = true;
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            cout << i << " is a factor\n";
            flag = false;
        }
    }    
    if (flag){
        cout << "Is Prime\n";
    }
    else cout << "Therefore not prime";
    


}