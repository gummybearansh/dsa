#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 6};
    int n = sizeof(arr) / sizeof(arr[1]);
    cout << n;
}