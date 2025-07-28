/*
Cuarto programa Escribir un programa que lea de la entrada estandar 
dos número y muestre en la salida estándar 
su suma, resta, multiplicación y división
*/

#include <iostream> //libreria para entrada y salida de datos

using namespace std;

int main() {
    float a, b, c, d, e, f, resultado = 0;

    cout << "Digite el Valor de a"; cin >> a;
    cout << "Digite el Valor de b"; cin >> b;
    cout << "Digite el Valor de c"; cin >> c;
    cout << "Digite el Valor de d"; cin >> d;
    cout << "Digite el Valor de e"; cin >> e;
    cout << "Digite el Valor de f"; cin >> f;

    resultado = (a + b / c) / (d + e /f);

    cout << "\n el resultado es: " << resultado << endl;

    return 0;
}