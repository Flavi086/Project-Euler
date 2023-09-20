#include <iostream>

int main() {
    long long numero = 600851475143;
    long long factorPrimoMasGrande = 0;
    
    while (numero % 2 == 0) {
        factorPrimoMasGrande = 2;
        numero /= 2;
    }

    for (long long i = 3; i * i <= numero; i += 2) {
        while (numero % i == 0) {
            factorPrimoMasGrande = i;
            numero /= i;
        }
    }
    
    if (numero > 1) {
        factorPrimoMasGrande = numero;
    }
    
    std::cout << "El factor primo más grande de 600851475143 es: " << factorPrimoMasGrande << std::endl;
    
    return 0;
}