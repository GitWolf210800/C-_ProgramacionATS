/*
Cuarto programa Escribir un programa que lea de la entrada estandar 
dos número y muestre en la salida estándar 
su suma, resta, multiplicación y división

Ejercicio 6:
Escriba un programa que lea la nota final de cuatro alumnos y calcule l nota final de media de los cuatros alumnos
*/

#include <iostream> //libreria para entrada y salida de datos

using namespace std;

int main() {
    int a, b, c, d, promedio = 0;
    cout << "Digite la nota del alumno a: "; cin >> a;
    cout << "Digite la nota del alumno b: "; cin >> b;
    cout << "Digite la nota del alumno c: "; cin >> c;
    cout << "Digite la nota del alumno d: "; cin >> d;

    promedio = (a + b + c + d) / 4;

    cout<<"\nEl nuevo valor del promedio de notas es: "<<promedio<<endl;
}