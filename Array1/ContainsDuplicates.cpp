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

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (v[i] == v[j]){
                cout << "Contains duplicates\n";
                return 0;
            }
        }
    }

    cout << "No duplicates\n";
}