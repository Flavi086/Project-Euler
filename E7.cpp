#include <iostream>
using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    if (numero == 2 || numero == 3) {
        return true;
    }

    if (numero % 2 == 0) {
        return false;
    }

    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int contador = 1;
    int primo = 2;
    int numero = 3;

    while (contador < 10001) {
        if (esPrimo(numero)) {
            contador++;
            primo = numero;
        }
        numero += 2;
    }

    cout << primo << endl;
    return 0;
}