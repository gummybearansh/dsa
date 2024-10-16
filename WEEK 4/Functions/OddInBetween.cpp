#include <iostream>
using namespace std;

void odd_in_between(int a, int b){
    for (int i = a + 1; i < b; i++){
        if (i % 2 == 1){
            cout << i << ' ';
        }
    }
}

int main(){
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;

    odd_in_between(a, b);
}