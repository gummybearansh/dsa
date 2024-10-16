#include <iostream>
#include <vector> 
using namespace std;

int main(){
    vector <int> v;
    int n;
    cout << "size : ";
    cin >> n;
    int temp;
    for (int i = 0; i < n; i++){
        cin >> temp;
        v.push_back(temp);
    } 

    for (int i = 0; i < n - 1; i++){
        if (v[i + 1] - v[i] == 2){
            cout << "missing element " << v[i] + 1 << endl;
        }
    }
}