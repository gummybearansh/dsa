#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // For printing the spaces before stars in each row
        for (int j =0; j<n-i-1; j++)
        {
            cout <<" ";
        }
        for (int j = 0; j <= i; j++){
            cout << "*";
        }
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
}