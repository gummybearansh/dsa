#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, ans = 0;
    cout << "Enter a number: ";
    cin >> n;   

    int count = 0;
    if (n < 10){
        cout << "Reversed: " << n << endl;
        return 0;
    }

    int a = n;
    // first need to count digits
    while (a > 0){
        count ++;
        a /= 10;
    }

    // then need to use algorithm
    while (n > 0){
        int power = pow(10, count - 1);
        ans += (n % 10) * power;
        n /= 10;
        count --;
    }
    cout << "Reversed: "  << ans << endl;
}