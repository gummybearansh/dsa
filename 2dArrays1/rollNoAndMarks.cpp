// program to store roll number and marks side by side of 4 students 

#include <iostream>
using namespace std;

int main(){
    int database[4][2];
    for (int i = 0; i < 4; i++){
        cout << "Enter student " << i + 1 << " details:\n";
        for (int j = 0; j < 2; j++){
            cin >> database[i][j];
        }
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 2; j++){
            if (j == 0) cout << "Roll No.: ";
            else cout << " Marks: ";
            cout << database[i][j] << ';';
        }
        cout << endl;
    }
}