#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int razlichnyh = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            razlichnyh = razlichnyh + 1;
        }
    }
    cout << razlichnyh;
    return 0;
}