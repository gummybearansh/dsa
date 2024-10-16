#include <iostream>
#include <vector> 
using namespace std;

int main(){
    vector <int> v;
    int n;
    cout << "size : ";
    cin >> n;
    cout << "Enter elements:\n";
    int temp;
    for (int i = 0; i < n; i++){
        cin >> temp;
        v.push_back(temp);
    } 

    int largest = -1, second_largest = -2;
    for (int i = 0; i < n; i++){
        if (v[i] > largest){
            second_largest = largest;
            largest = v[i];
        }

        else if (v[i] > second_largest){
            second_largest = v[i];
        }
    }

    cout << "second largest: " << second_largest << endl;

    
}