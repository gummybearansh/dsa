#include <iostream>
using namespace std;

int main(){
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int a[r][c];
    cout << "Enter elements: " << endl;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> a[i][j];
        }
    }

    // cout << "array transpose is: " << endl;
    // for (int j = 0; j < c; j++){
    //     for (int i = 0; i < r; i++){
    //         cout << a[i][j] << ' ';
    //     }
    //     cout << endl;
    // }

    int t[c][r];
    for (int i = 0; i < c; i++){
        for (int j = 0; j < r; j++){
            t[i][j] = a[j][i];
            cout << t[i][j] << ' ';
        }
        cout << endl;
    }
}