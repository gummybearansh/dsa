#include <iostream>
using namespace std;

int main(){
    int x = 1;
    int *p = &x;
    int **ptr = &p;
    
    cout << x << ' ' << p << ' ' << ptr << endl;
    cout << x << ' ' << *p << ' ' << *ptr << ' ' << **ptr;
}