#include <iostream>

int main() {
    int tot = 1000;

    for (int a = 1; a < tot; a++) {
        for (int b = a + 1; b < tot; b++) {
            int c = tot - a - b;
            if (a * a + b * b == c * c) {
                long long product = static_cast<long long>(a) * b * c;
                std::cout << "La terna pitagórica es: a = " << a << ", b = " << b << ", c = " << c << std::endl;
                std::cout << "El producto abc es: " << product << std::endl;
                return 0;
            }
        }
    }

    std::cout << "No se encontró ninguna terna pitagórica que cumpla con las condiciones." << std::endl;
    return 0;
}