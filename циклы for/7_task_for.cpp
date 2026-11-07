#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int minimum = 0;
    int nashel = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            if (nashel == 0 || a[i] < minimum) {
                minimum = a[i];
                nashel = 1;
            }
        }
    }
    cout << minimum;
    return 0;
}