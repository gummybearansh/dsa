#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int toPrint = 1;
    for (int i = 0; i < n; i++){
        i %2 == 0 ? toPrint = 1 : toPrint = 0;
        for (int j = 0; j <= i; j++){
            cout << toPrint << ' ';
            // superb logic 
            // 1 - (1) -> 0
            // 1 - (0) -> 1
            toPrint = 1 - toPrint;
        }
        cout << endl;
    }
}