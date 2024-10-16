#include <iostream>
using namespace std;

int main(){
    int a;

    if (3 + 2 % 5){ // value becomes 5 -> any non zero means true, 0 -> False
        cout << "This works\n";
    }

    if (a = 10){ // can be considered as if (a)
        cout << "Even this works\n";
    }

    if (-5){ // nonzero value -> True;
        cout << "Surprisingly even this works\n";
    }
}