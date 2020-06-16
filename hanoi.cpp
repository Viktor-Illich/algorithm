#include <iostream>

void hanoi(int i, int k, int n) {
    if (n == 1) {
        std::cout << "move disk 1 from pin " << i << " to pin " << k << ".\n";
    } else {
        int tmp = 6 - i - k;
        hanoi(i, tmp, n - 1);
        std::cout << "move disk " << n << " from pin " << i << " to pin " << k << ".\n";
        hanoi(tmp, k, n - 1)
    }
}

int main() {
    hanoi(1, 2, 3);
    return 0;
