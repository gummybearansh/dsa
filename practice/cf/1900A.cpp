#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        char arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        // basically if there is ...    
        // three consecutive gaps, we can put it in edges
        // and it will automatically keep filling the middle one
        // and we can use operation 2 to move it to wherever needed 

        // otherwise, we need to fill each individual one 
        int gaps = 0, consecutiveGaps = 0;
        bool threeConsecutiveGapsFound = false;
        for (int i = 0; i < n; i++){
            if (arr[i] == '.'){
                gaps ++;
                consecutiveGaps++;
            } else if (arr[i] == '#'){
                consecutiveGaps = 0;
            }
            if (consecutiveGaps == 3){
                threeConsecutiveGapsFound= true;
                break;
            }
        }
        if (threeConsecutiveGapsFound){
            cout << 2 << endl;
        } else {
            cout << gaps << endl;
        }
    }
}