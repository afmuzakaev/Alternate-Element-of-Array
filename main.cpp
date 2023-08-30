#include <iostream>

int main() {
    int N;
    std::cout << "Enter the size of the array: ";
    std::cin >> N;

    int A[N];
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    std::cout << "Alternate elements of the array: ";
    for (int i = 0; i < N; i += 2) {
        std::cout << A[i] << " ";
    }
    
    std::cout << std::endl;

    return 0;
}
