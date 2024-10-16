#include <iostream>
using namespace std;

void print_triangle(int x){
    for (int i = 1; i <= x; i++){
        for (int j = 0; j < i; j++){
            cout << '*';
        }
        cout << '\n';
    }
}

int main(){
    int n;
    cout << "Enter height of pyramid or 0 to stop: ";
    cin >> n;

    while (n!= 0){
        print_triangle(n);
        cout << "Enter height of pyramid or 0 to stop: ";
        cin >> n;
    }
}