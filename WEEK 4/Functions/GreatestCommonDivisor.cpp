#include <iostream>
#include <cmath>
using namespace std;

void gcd(int x, int y){
    int div = 1;
    // first common divisor in this loop will be gcd (reverse mein hai)
    for (int i = min(x, y); i >= 1; i--){
        if (x % i == 0 && y % i == 0){
            div = i;
            break;
        }
    }
    // ghatiya approach

    // for (int i = 1; i <= min(x , y); i++){
    //     if (x % i == 0 && y % i == 0){
    //         div = max(div, i);
    //     }
    // }

    cout << div;
}

int main(){
    int x, y;
    cout << "Enter 2 numbers: ";
    cin >> x >> y;
    gcd(x, y);
}