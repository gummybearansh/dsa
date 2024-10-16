#include <iostream>
#include <vector> 
using namespace std;

int main(){
    vector <int> v(5);
    v.push_back(0);

    cout << v.size() << endl;
    cout << v.capacity() << endl;
}