#include <iostream>
using namespace std;

void fun(int n){
    cout << "Last digit is: " << n % 10 << endl;
    while (n > 9){
        n /= 10;
    }
    cout << "First digit is: " << n << endl;
}

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;

    fun(n);
}