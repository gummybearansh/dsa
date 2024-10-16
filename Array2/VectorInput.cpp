#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> v;
    cout << "Enter elements: " << endl;
    int temp;
    while (cin >> temp){
        v.push_back(temp);
    }

    for (int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
}