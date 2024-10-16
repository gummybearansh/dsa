#include <iostream>
using namespace std;

int main(){
    int rows, columns;
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter columns: ";
    cin >> columns;

    int arr[rows][columns];
    cout << "Enter elements: \n"; 
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++){
        cout << "[";
        for (int j = 0; j < columns; j++){
            cout << arr[i][j] << ' ';
        }
        cout << "]\n";
    }
}