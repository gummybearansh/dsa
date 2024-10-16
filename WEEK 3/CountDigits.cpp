#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int digits = 1;
    while (true){
        if (n > 9){
            n /= 10;
            digits ++;
        }
        else{
            cout << digits << endl;
            break;
        }
    }
}