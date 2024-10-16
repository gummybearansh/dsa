#include <iostream>
using namespace std;

int main(){
    int a;
    int *P_a = &a;

    cout << P_a << ' ' << P_a + 1 << endl;
    // 0x16f5c312c 0x16f5c3130

    bool b;
    bool *P_b = &b;
    cout << P_b << ' ' << P_b + 1 << endl;
    // 0x16bcd711f 0x16bcd7120
}