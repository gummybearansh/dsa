#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter till where sum is required: ";
    cin >> n;

    int sum = 0, val;
    for (int i = 1; i <= n; i++){
        i % 2 == 0 ? sum -= i : sum += i;
    }

    cout << "Sum: " << sum << endl;
}
