#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        if ((a[i] > 0 && a[i + 1] > 0) || (a[i] < 0 && a[i + 1] < 0)) {
            if (a[i] < a[i + 1]) {
                cout << a[i] << " " << a[i + 1];
            } else {
                cout << a[i + 1] << " " << a[i];
            }
            break;
        }
    }
    return 0;
}