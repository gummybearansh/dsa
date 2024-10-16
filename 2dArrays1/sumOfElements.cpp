// find sum of elements of 2D array

#include <iostream>
using namespace std;

int main(){
    int r, c; 
    cout << "Enter rows and columns: "; 
    cin >> r >> c;

    int a[r][c];
    cout << "Enter elemtnts: ";
    int sum = 0; 
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> a[i][j];
            sum += a[i][j];
        }
    }

    cout << "Sum of elements = " << sum << endl;
}
