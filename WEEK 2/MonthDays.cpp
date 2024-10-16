#include <iostream>
using namespace std;


int main(){
    int n;
    cout << "Enter month number: ";
    cin >> n;

    switch(n){
        case 1:
            cout << "31" << endl; // January
            break;

        case 2:
            cout << "28" << endl; // February
            break;

        case 3:
            cout << "31" << endl; // March
            break;

        case 4:
            cout << "30" << endl; // April
            break;

        case 5:
            cout << "31" << endl; // May
            break;

        case 6:
            cout << "30" << endl; // June
            break;

        case 7:
            cout << "31" << endl; // July
            break;

        case 8: 
            cout << "31" << endl; // August
            break;

        case 9: 
            cout << "30" << endl; // September 
            break;

        case 10:
            cout << "31" << endl;
            break;
        case 11:
            cout << "30" << endl; // November
            break;

        case 12:
            cout << "31" << endl; // December
            break;

        default:
            cout << "Invalid Month" << endl;
    }
}