#include <iostream>
using namespace std;

int comparaciones = 0;
int intercambios = 0;

// Ordena de forma ascendente el arreglo "numeros" de tamanio n,
// mostrando el arreglo despues de cada pasada y contando
// el numero de comparaciones e intercambios realizados.
void burbuja(int numeros[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            comparaciones++;
            if (numeros[j] > numeros[j + 1]) {
                // Intercambio de valores en el arreglo
                int temporal = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temporal;
                intercambios++;
            }
        }

        cout << "Pasada " << (i + 1) << ": ";
        for (int k = 0; k < n; k++) {
            cout << numeros[k] << " ";
        }
        cout << endl;
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
    cout << endl;

    burbuja(numeros, n);

    cout << endl << "Arreglo ordenado: ";
    mostrarArreglo(numeros, n);

    cout << endl;
    cout << "Elementos: " << n << endl;
    cout << "Comparaciones: " << comparaciones << endl;
    cout << "Intercambios: " << intercambios << endl;

    return 0;
}
