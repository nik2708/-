#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int minimum = 10000;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0 && a[i] < minimum) {
            minimum = a[i];
        }
    }
    cout << minimum;
    return 0;
}