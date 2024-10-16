#include <iostream>
#include <vector>

using namespace std;

void swap(int* x, int*y){
    int t = *x;
    *x = *y;
    *y = t;
}
 
void reversePart(vector <int>& v, int x, int y){
    for (; x < y; x++, y--){
        swap(&v[x], &v[y]);
    }
}

int main(){
    int n, temp, rotate;
    vector <int> v;

    cout << "Enter size of array: ";
    cin >> n; 

    cout << "Enter elements: ";
 
    for (int i = 0; i < n; i++){
        cin >> temp;
        v.push_back(temp);
    }

    cout << "Rotate? ";
    cin >> rotate; 

    rotate = n % rotate; 

    reversePart(v, 0, n - rotate - 1);
    reversePart(v, n-rotate, n-1);
    reversePart(v, 0, n-1);

    for (int i = 0; i < n; i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}