/*
Cuarto programa Escribir un programa que lea de la entrada estandar 
dos número y muestre en la salida estándar 
su suma, resta, multiplicación y división
*/

#include <iostream> //libreria para entrada y salida de datos

using namespace std;

int main() {
    int x, y, aux;
    cout << "Digite el valor de x: "; cin >> x;
    cout << "Digite el valor de y: "; cin >> y;

    aux = x;
    x = y;

    cout<<"\nEl nuevo valor de x es: "<<x<<endl;
    cout<<"El nuevo valor de y es:"<<y<<endl;
}