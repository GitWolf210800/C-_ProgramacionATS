/*
La calificacion final de un estidiante es la media ponderada de tres nota:
La nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota de participación que cuenta el 10% restante. 
    Escriba un programa que lea la entrada estándar, las tres notas de un alumno y escriba la salida estándar si nota final.
*/

#include <iostream> //libreria para entrada y salida de datos

using namespace std;

int main() {
    float practica, teorica, participacion, nota_final;

    cout << "Digite la nota de practica: "; cin >> practica;
    cout << "Digite la nota de teorica: "; cin >> teorica;
    cout << "Digite la nota de participacion: "; cin >> participacion;

    practica *= 0.30;
    teorica *= 0.60;
    participacion *= 0.10;

    nota_final = practica + teorica + participacion;

    cout << "\nLa nota final es: " <<nota_final;

    return 0;
}