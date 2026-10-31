#include <iostream>

void printReverse(const int* data, int count) {
    for (int i = count; i > 0; i--) {
        std::cout << *(data + i - 1) << " ";
    }
    std::cout << std::endl;
}

int main() {
    int numbers[] = {100, 200, 300, 400, 500};
    int count = sizeof(numbers) / sizeof(numbers[0]);

    printReverse(numbers, count);
    return 0;
}
