#include "iostream"

using namespace std;


int left_bound(int A[], int N, int x) {
    int left = -1;
    int right = N;

    while (right - left > 1) {
        int middle = (left + right) / 2;

        if (A[middle] < x) {
            left = middle;
        } else {
            right = middle;
        }

    }

    return left;
}

int find(int A[], int N, int x) {
    int left = left_bound(A, N, x);
    int potential_index = left + 1;

    if (potential_index < N and A[potential_index] == x) {
        return potential_index;

    }

    return -1;
}


int main() {
    int N = 10;
    int A[] = {1, 1, 2, 2, 5, 6, 6, 8, 9, 10};

    cout << find(A, N, 8) << endl;

    return 1;
}


