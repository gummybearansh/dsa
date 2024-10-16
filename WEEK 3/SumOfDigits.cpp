#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int a = n, sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }

    if (a == 0) cout << 0 << endl;
    else cout << sum << endl;
}