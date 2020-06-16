#include "iostream"

using namespace std;

void count_sort(int A[], int N) {
    int F[N] = {0};
    for (int i = 0; i < N; ++i) {
        F[A[i]]++;
    }
    int i = 0;
    for (int x = 0; x < N; ++x) {
        for (int k = 0; k < F[x]; ++k) {
            A[i] = x;
            i++;
        }
    }
}

void generate_random_array(int A[], int N, int M) {
    for (int i = 0; i < N; i++) {
        A[i] = rand() % M;
    }
}

void print_array(int A[], int N) {
    for (int i = 0; i < N; i++) {
        std::cout << A[i] << '\t';
    }
    std::cout << '\n';
}

int main() {

    int N = 14;
    int A[N] = {0};

    generate_random_array(A, N, 14);
    print_array(A, N);
    count_sort(A, N);
    print_array(A, N);


}