#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter month Number: ";
    cin >> n;
    
    // 1 3 5 7 8 10 12 th months have 31 days 
    // 4 6 9 11 th months have 30 days
    // 2 nd month has 28 days

    switch((n <= 7 && n % 2 != 0) || (n >= 8 && n % 2 == 0)){
        case 1:
        cout << "31" << endl;
    }

    switch (n == 4 || n == 6 || n == 9 || n == 11){
        case 1:
        cout << "30" << endl;
    }

    switch(n){
        case 2:
        cout << "28" << endl;
    }
}