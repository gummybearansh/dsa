#include <iostream>
#include <vector>

using namespace std;

void swap(int* x, int*y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    vector <int> v;
    int n;
    cout << "Size of vector: ";
    cin >> n;
    cout << "Enter elements: ";

    int temp; 
    for (int i = 0; i < n; i++){
        cin >> temp;
        v.push_back(temp);
    }

    // reversing using two pointer swap
    // smarter way is to keep swapping until initial pointer exceeds ending pointer 
    // can use multiple declaration, multiple condition, and multiple increment / decrement in for loop wow 
    for (int i = 0, j = (n-1) - i; i < j; i++, j--){
        swap(&v[i], &v[j]);
    }

    for (int i = 0; i < n; i++){
        cout << v[i] << ' ';
    }
}