#include <iostream>

using namespace std;

int main () {
    int n;

    cin >>n;

    for (int i = 1; i <= n; ++i) {
        for(int j = i; j >= 1; j--) {
            cout << "*";
        }
        cout << "\n";
    }
}


