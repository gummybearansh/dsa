#include <iostream>
#include <vector>

using namespace std;

void swap(int *x, int* y){
    int t = *x;
    *x = *y;
    *y = t;
}

vector <int> int_vector_input(){
    int n, temp; 
    vector <int> v; 
    cout << "Enter number of elements in vector: ";
    cin >> n; 
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++){
        cin >> temp;
        v.push_back(temp);
    }
    return v;
}

int main(){
    vector <int> v = int_vector_input();

    // better approach
    // two pointer, 
    
    int i = 0, j = v.size() - 1;

    while (i < j){
        if (v[i] > 0 && v[j] < 0){
            swap(&v[i], &v[j]);
        }
        if (v[i] < 0) i++;
        if (v[j] > 0) j--;
        
    }

    for (int i = 0; i < v.size(); i++){
        cout << v[i] << ' '; 
    }
    cout << endl;
}
