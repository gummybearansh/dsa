#include <iostream>
using namespace std;

float pi = 3.14;

float area(float r){
    return pi * r * r;
}

int main(){
    float radius;
    cout << "Enter radius: ";
    cin >> radius;

    cout << area(radius);
}