/*
sexto programa Escribir una expresión matemática en C++

*/

#include <iostream> //libreria para entrada y salida de datos

using namespace std;

int main() {
    float a,b,c,d, resultado = 0;

    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;
    cout<<"Digite el valor de c: "; cin>>c;
    cout<<"Digite el valor de d: "; cin>>d;

    resultado = (a+b) / (c+d);

    cout.precision(2);
    cout<<"\n El resultado es: "<<resultado<<endl;

    return 0;
}