#include "iostream"

using namespace std;

int main() {

    int n = 6;
    int arr[n] = {56, 43, 12, 65, 76, 78};
    int tmp = 0;

    for (int idx_i = 0; idx_i < n - 1; idx_i++) {          // n - 1
        int min_idx = idx_i;                              // n - 1

        for (int idx_j = idx_i + 1; idx_j < n; idx_j++) {  // E
            if (arr[idx_j] < arr[min_idx]) {
                min_idx = idx_j;
            }
        }

        if (min_idx != idx_i) {
            swap(arr[idx_i], arr[min_idx]);
        }
    }

    for (const auto &e : arr) {
        std::cout << e << std::endl;
    }
}