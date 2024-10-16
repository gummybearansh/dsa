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

    int product = 1;
    for (int i = 0; i < n; i++){
        product *= v[i];
    }

    cout << "product: " << product << endl;
}