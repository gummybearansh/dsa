#include <iostream>
#include <vector>

using namespace std;

void display(vector <int> vec){
    for(int i = 0; i < vec.size(); i++){
        cout << vec.at(i) << ' ';
    }
    cout << endl;
}

void change_using_ampersand(vector <int> &vec){
    vec[1] = 999;
    display(vec);
}

void change(vector <int> a){
    a[1] = 99;
    display(a);
}


int main(){
    vector <int> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);

    display(v);

    change(v);

    display(v);

    change_using_ampersand(v);

    display(v);
}