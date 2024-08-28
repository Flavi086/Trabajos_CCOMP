#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Ingresa dos números enteros: ";
    cin >> num1 >> num2;
    
    if (num1 > num2) {
        cout << num1 << " es más grande" << endl;
    } else if (num2 > num1) {
        cout << num2 << " es más grande" << endl;
    } else {
        cout << "Estos números son iguales" << endl;
    }
    
    return 0;
}