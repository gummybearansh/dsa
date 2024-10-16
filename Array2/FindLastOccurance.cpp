#include <iostream>
#include <vector>

using namespace std;

int find_last_occurance(vector <int>& vec, int n){
    // method 1 easy method 
    // for (int i = 0; i < vec.size(); i++){
    //     if (vec.at(i) == n){
    //         occurance = i;
    //     } 
    // }

    // method 2 

    for (int i = vec.size() - 1; i > -1; i--){
        if (vec.at(i) == n) return i;
    }
    return -1;
}

int main(){
    vector <int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    v.push_back(2);
    v.push_back(3);

    int x;
    cin >> x;

    int last_occurrence = find_last_occurance(v, x);
    cout << last_occurrence;
}