/*
Cuarto programa Escribir un programa que lea de la entrada estandar 
dos número y muestre en la salida estándar 
su suma, resta, multiplicación y división
*EJERCIOCIO!!!!
Escribe un programa que lea de la entrada estándar el precio de un producto y
muestre en la salida estándar el precio del producto al aplicarle el IVA
*/

#include <iostream> //libreria para entrada y salida de datos

using namespace std;

int main() {
    int precio, multiplicacion = 0, iva = 0, precio_final;

    cout<<"Digite el precio: "; cin>>precio;
    //cout<<"Digite otro numero: "; cin>>n2;

    iva = (precio * 25)/100; //aplicando el 25%
    precio_final = precio + iva;

    cout<<"\n el precio Final con el IVA es: "<<precio_final<<endl;

    return 0;
}