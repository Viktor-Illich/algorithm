#include <iostream>

using namespace std;

const int COUNT_ELEMENTS = 6;

int main() {

    int elements[COUNT_ELEMENTS] = {31, 41, 59, 26, 41, 58};

    int currentElement, i = 0;

    for (int j = 1; j < COUNT_ELEMENTS; ++j) {               // n
        currentElement = elements[j];                        // n - 1
        i = j - 1;                                           // n - 1
        while (i >= 0 && elements[i] < currentElement) {
            elements[i + 1] = elements[i];
            i = i - 1;
        }
        elements[i + 1] = currentElement;
    }

    for (const auto &e : elements) {
        std::cout << e << std::endl;
    }
}

