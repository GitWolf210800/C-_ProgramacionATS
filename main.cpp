/*
La calificacion final de un estidiante es la media ponderada de tres nota:
La nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota de participación que cuenta el 10% restante. 
    Escriba un programa que lea la entrada estándar, las tres notas de un alumno y escriba la salida estándar si nota final.

Ejercicio 9:
Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo rectángulo y escriba en la salida estándar su hipotenusa
*/

#include <iostream> //libreria para entrada y salida de datos
#include <cmath>

using namespace std;

int main() {
    int cateto_menor, cateto_mayor, hipotenusa;

    cout << "Digite el cateto menor: "; cin >> cateto_menor;
    cout << "Digite el cateto mayor: "; cin >> cateto_mayor;

    cateto_menor = pow(cateto_menor, 2);
    cateto_mayor = pow(cateto_mayor, 2);

    hipotenusa = sqrt( cateto_menor + cateto_mayor );

    cout << "El valor de la hipotenusa es: " << hipotenusa << endl;

    return 0;
}