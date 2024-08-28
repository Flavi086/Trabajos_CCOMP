#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Ingresa tres enteros: ";
    cin >> num1 >> num2 >> num3;

    int suma = num1 + num2 + num3;
    int promedio = suma / 3;
    int producto = num1 * num2 * num3;
    int menor = min(min(num1, num2), num3);
    int mayor = max(max(num1, num2), num3);

    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Producto: " << producto << endl;
    cout << "Menor: " << menor << endl;
    cout << "Mayor: " << mayor << endl;

    return 0;
}