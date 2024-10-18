#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    // rows 
    // spaces will be 2 * (n-1) and will reduce by 2 every row
    int spaces = 2 * (n-1);
    for (int i = 1; i <= n; i++){
        // another better solution 
        // numbers
        for (int j = 1; j <= i; j++){
            cout << j;
        }
        // spaces 
        for (int j = 0; j < spaces; j++){
            cout << " ";
        }
        // numbers 
        for (int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
        // also decrement spaces 
        spaces -= 2;

        // // first left sided number pyramid, when j > i -> print spaces till n;
        // for (int j = 1; j <= n; j++){
        //     if (j > i){cout << ' '; continue;}
        //     cout << j;
        // }
        // // print spaces till diagonal (i + j < n)
        // // since ulta pyramid needs to be printed
        // // another variable -> knows till which number it needs to go
        // // decrement it 
        // for (int k=i, j = 1; j <= n; j++){
        //     if (i+j <= n){cout << " "; continue;}
        //     cout << k--;
        // }
        // cout << endl;
    }
}