#include <iostream>

using namespace std;

const int N = 2e4;
int a[N];
int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i+1; j < n; ++j) {
            if(a[j] < a[i]) swap(a[i],a[j]);
        }
    }

    long long kq = 0;

    for (int i = 0; i < n; ++i) {
        kq += (n - i -1) * a[i];
        cout << a[i] << " ";
    }

    cout << kq;
}
