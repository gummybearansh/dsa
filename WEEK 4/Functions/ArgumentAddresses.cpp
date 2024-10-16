#include <iostream>
using namespace std;

void pass(int x){
    cout << "Functon address of x: " << &x;
}

int main(){
    int x = 3;
    int *address_x = &x;

    cout << "Value of x: " << x << "\nAddress of x: " << address_x << endl;

    pass(x);
}