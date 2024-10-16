#include <iostream>
using namespace std;

int count_digits(int n){
    int digits = 0;
    while (true){
        digits ++;
        n /= 10;
        if (n == 0){
            break;
        }
    }
    return digits;
}

int squared(int x){
    return x * x;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int digits = count_digits(n);
    cout << squared(digits);
}