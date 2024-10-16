#include <iostream>
#include <vector> 
using namespace std;

int main(){
    int n; 
    cout << "Enter size of vector: ";
    cin >> n;
    vector <int> a, b;

    int temp;
    for (int i = 0; i < n; i++){
        cin >> temp;
        a.push_back(temp);
    }

    for (int i = n-1; i > -1; i--){
        b.push_back(a[i]);
    }

    for (int i = 0; i < n; i++){
        cout << b[i] << ' ';
    }
}