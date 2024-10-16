#include <iostream>
using namespace std;

void fun(int x = 7, int y = 8){
    cout << x << ' ' << y << endl;
}

int main(){
    fun(3, 4);
    fun();
    fun(1);
}