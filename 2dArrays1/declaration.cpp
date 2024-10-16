#include <iostream>
using namespace std;

int main(){
    int arr[][3] = {1, 2, 3, 4, 5, 6};
    int brr[][2] = {1, 2, 3, 4, 5, 6};

    cout << "arr: \n";
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    cout << "brr: \n";
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << brr[i][j] << ' ';
        }
        cout << endl;
    }


}