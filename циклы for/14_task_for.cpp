#include <iostream>
using namespace std;
int main() {
    int n;
    int k;
    cin >> n >> k;
    int sbit[1001];
    for (int i = 1; i <= n; i++) {
        sbit[i] = 0;
    }
    for (int i = 0; i < k; i++) {
        int l;
        int r;
        cin >> l >> r;
        for (int j = l; j <= r; j++) {
            sbit[j] = 1;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (sbit[i] == 1) {
            cout << ".";
        } else {
            cout << "I";
        }
    }
    return 0;
}