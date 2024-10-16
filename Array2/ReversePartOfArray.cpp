#include <iostream>
#include <vector>

using namespace std;

void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    vector <int> v;
    int n, x, y, temp;

    cout << "Enter size of vector: ";
    cin >> n;

    cout << "Enter elements of vector: ";
    for (int i = 0; i < n; i++){
        cin >> temp;
        v.push_back(temp);
    }

    cout << "Enter indices to reverse: ";
    cin >> x >> y;

    for (; x < y; x++, y--){
        swap(&v[x], &v[y]);
    }

    for (int i = 0; i < n; i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}