#include <iostream>
using namespace std;

// Funcion recursiva que calcula el termino n de la sucesion de Fibonacci
long long fibonacci(int n) {
    // Casos base
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    // Caso recursivo
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    cout << "Ingrese hasta que termino de la serie de Fibonacci desea calcular: ";
    cin >> n;

    if (cin.fail() || n < 0) {
        cout << "Valor no valido. Debe ingresar un numero entero mayor o igual a 0." << endl;
        return 0;
    }

    cout << endl;
    for (int i = 0; i <= n; i++) {
        cout << "Fibonacci(" << i << ") = " << fibonacci(i) << endl;
    }

    return 0;
}
