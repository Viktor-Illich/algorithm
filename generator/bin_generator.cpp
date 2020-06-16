#include <iostream>

using namespace std;

const int MAX_DIGITS_TO_GENERATE = 100;

void generate_binary_numbers(int max_digits) {
    static int digits_combination[MAX_DIGITS_TO_GENERATE];
    static int top = 0;

    if (digits_combination == 0) {
        for (int i = 0; i < top; ++i) {
            std::cout << digits_combination[i];
        }
        std::cout << '\n';
    } else {
        digits_combination[top++] = 1;
        generate_binary_numbers(max_digits - 1)
        top--;
    } else {
        digits_combination[top++] = 0;
        generate_binary_numbers(max_digits - 1)
        top--;
    }


}

int main() {
    generate_binary_numbers(3);
    return 0;
}
