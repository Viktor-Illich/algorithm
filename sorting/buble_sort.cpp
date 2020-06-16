#include <iostream>

using namespace std;

int main() {

    int n = 6;
    int arr[n] = {56, 43, 12, 65, 76, 78};
    int tmp = 0;

    for (int j = 0; j < n - 1; j++) {
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
            }
        }
    }

    for (const auto &e : arr) {
        std::cout << e << std::endl;
    }
}