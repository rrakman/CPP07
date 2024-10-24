#include <iostream>

int main() {
    int* a = new int[100](); // Value-initialized to 0
    int* b = new int[100];   // Uninitialized

    std::cout << "Array a (value-initialized):" << std::endl;
    for (int i = 0; i < 100; ++i) {
        std::cout << "a[" << i << "] = " << a[i] << std::endl;
    }

    std::cout << "Array b (uninitialized):" << std::endl;
    for (int i = 0; i < 100; ++i) {
        std::cout << "b[" << i << "] = " << b[i] << std::endl;
    }

    delete[] a;
    delete[] b;

    return 0;
}
