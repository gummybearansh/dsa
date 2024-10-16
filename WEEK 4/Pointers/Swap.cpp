#include <iostream>
using namespace std;

void swap(int* p_x, int* p_y){
    int temp = *p_x;
    *p_x = *p_y;
    *p_y = temp;
}

int main(){
    int x = 1;
    int y = 2;
    cout << "x: " << x << ' ' << "y: " << y << '\n';
    swap(&x, &y);
    cout << "x: " << x << ' ' << "y: " << y << '\n';
}