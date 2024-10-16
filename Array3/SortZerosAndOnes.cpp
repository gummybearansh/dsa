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
        if (v[i] == 1 && v[j] == 0){
            swap(&v[i], &v[j]);
        }
        if (v[i] == 0) i++;
        if (v[j] == 1) j--;
        
    }
    // int noz = 0, noo = 0;
    // for (int i = 0; i < v.size(); i++){
    //     if (v[i] == 0){
    //         noz ++;
    //     }
    //     else{
    //         noo ++ ;
    //     }
    // }

    // vector <int> ans;
    // for (int i = 0; i < noz; i++){
    //     ans.push_back(0);
    // }
    // for (int i = 0; i < noo; i++){
    //     ans.push_back(1);
    // }

    for (int i = 0; i < v.size(); i++){
        cout << v[i] << ' '; 
    }
    cout << endl;
}
