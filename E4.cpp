#include <iostream>

bool esPalindromo(int numero) {
    int original = numero;
    int invertido = 0;

    while (numero > 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    return original == invertido;
}

int main() {
    int palindromoMasGrande = 0;

    for (int i = 100; i <= 999; i++) {
        for (int j = 100; j <= 999; j++) {
            int producto = i * j;
            if (esPalindromo(producto) && producto > palindromoMasGrande) {
                palindromoMasGrande = producto;
            }
        }
    }

    std::cout << "El palíndromo más grande formado por el producto de dos números de 3 dígitos es: " << palindromoMasGrande << std::endl;

    return 0;
}