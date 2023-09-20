#include <iostream>

long long calcularMCD(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long calcularMCM(long long a, long long b) {
    return (a * b) / calcularMCD(a, b);
}

int main() {
    long long resultado = 1;

   
    for (int i = 1; i <= 20; i++) {
        resultado = calcularMCM(resultado, i);
    }

    std::cout << "El número más pequeño divisible por todos los números del 1 al 20 es: " << resultado << std::endl;

    return 0;
}