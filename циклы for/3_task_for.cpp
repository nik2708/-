#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int kolichestvo = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            kolichestvo = kolichestvo + 1;
        }
    }
    cout << kolichestvo;
    return 0;
}