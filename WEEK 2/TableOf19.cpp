#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number till table: ";
    cin >> n;
    for (int i = 19; i <= n * 19; i += 19){
        cout << i << endl;
    }
}