#include <iostream>
using namespace std;

// Ordena de forma ascendente el arreglo "numeros" de tamanio n
void burbuja(int numeros[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                // Intercambio de valores en el arreglo
                int temporal = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temporal;
            }
        }
    }
}

void mostrarArreglo(int numeros[], int n) {
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
}

int main() {
    int numeros[] = {5, 1, 4, 2, 8};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    cout << "Arreglo original: ";
    mostrarArreglo(numeros, n);

    burbuja(numeros, n);

    cout << "Arreglo ordenado: ";
    mostrarArreglo(numeros, n);

    return 0;
}
