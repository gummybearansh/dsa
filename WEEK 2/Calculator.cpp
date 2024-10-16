#include <iostream>
using namespace std;

int main(){
    cout << "Calculate: ";
    int a, b;
    char ch;
    cin >> a >> ch >> b;

    switch(ch){
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
    }
}