#include <iostream>
using namespace std;

int fact(int x){
    int factorial = 1;
    for (int i = 1; i <= x; i++){
        factorial *= i;
    }
    return factorial;
}

int nCr(int n, int r){
    return fact(n) / (fact(r) * fact(n - r));
}

int nPr(int n, int r){
    return fact(n) / fact(n - r);
}

int main(){
    int n, r;   
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    cout << "nCr = " << nCr(n, r) << '\n' << "nPr = " << nPr(n ,r);
}