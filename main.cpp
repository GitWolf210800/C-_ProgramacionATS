/*
Tercer programa Escribir un programa que lea de la entrada estandar 
de los siguientes datos de una persona:
    Edad: dato tipo entero.
    Sexo: dato tipo carácter.
    Altura en metros: dato tipo real.
Tras Leer los datos, el programa debe mostrarlos en la salida estándar.

*/

#include <iostream> //libreria para entrada y salida de datos

using namespace std;

int main() {
    int edad;
    char sexo[10];
    float altura;

    cout<<"Digite su edad: "; cin>>edad;
    cout<<"Digite su Sexo: "; cin>>sexo;
    cout<<"Digite su altura en metros: "; cin>>altura;

    cout<<"\nEdad: "<<edad<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Altura en metros: "<<altura<<endl;


    return 0;
}