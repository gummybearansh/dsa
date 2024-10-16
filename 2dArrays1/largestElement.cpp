// program to find largest element of 2D array

#include <iostream>
using namespace std;

int main(){
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int a[r][c];
    int max = INT_MIN;
    cout << "Enter elements: ";
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> a[i][j];
            if (a[i][j] > max) max = a[i][j];
        }
    }

    cout << "max element: " << max << endl;

}