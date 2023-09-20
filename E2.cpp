#include <iostream>

int main() {
    int limite = 4000000;
    int suma = 0;
    int a = 1;
    int b = 2;
    
    while (a <= limite) {
        if (a % 2 == 0) {
            suma += a;
        }
        int siguiente = a + b;
        a = b;
        b = siguiente;
    }
    
    std::cout << "La suma de los términos pares de la secuencia de Fibonacci menores o iguales a 4 millones es: " << suma << std::endl;
    
    return 0;
}