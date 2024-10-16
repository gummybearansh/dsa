// program to find sum of matrices 

#include <iostream>
using namespace std;

int main(){
    int r, c;
    cout << "Enter rows and columns of both matrices ";
    cin >> r >> c; 

    int a[r][c], b[r][c];
    cout << "Enter elements of matrix 1 " << endl;;

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> a[i][j];
        }
    }
    
    cout << "Enter elements of matrix 2 " << endl; 
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> b[i][j];
        }
    }

    cout << "Sum of matrices: " << endl;
    int sum[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << ' ';
        }
        cout << endl;
    }


}
