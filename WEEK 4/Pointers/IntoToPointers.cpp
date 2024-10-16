#include <iostream>
using namespace std;

int main(){
    int x = 4;
    int* p = &x;
    
    *p = 10;
    
    cout << x << ' ' << p;
}