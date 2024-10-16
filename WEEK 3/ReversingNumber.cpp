#include <iostream>
using namespace std;

int main(){
    int n, ans = 0, last_digit = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 0){
        ans *= 10;
        last_digit = n % 10;
        ans += last_digit;
        n /= 10;
    }

    cout << "Reversed: " << ans << endl;
}