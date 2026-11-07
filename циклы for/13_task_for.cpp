#include <iostream>
using namespace std;
int main() {
    int rx[8];
    int ry[8];
    for (int i = 0; i < 8; i++) {
        cin >> rx[i] >> ry[i];
    }
    int byut = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (rx[i] == rx[j]) {
                byut = 1;
            }
            if (ry[i] == ry[j]) {
                byut = 1;
            }
            int dx = rx[i] - rx[j];
            int dy = ry[i] - ry[j];
            if (dx < 0) {
                dx = -dx;
            }
            if (dy < 0) {
                dy = -dy;
            }
            if (dx == dy) {
                byut = 1;
            }
        }
    }
    if (byut == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}