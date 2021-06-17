#include <iostream>
using namespace std;

//Ejercicio 1: Leer 3 números  y encontrar el promedio
int main() {
    // cout << "Hola mundo. Primer programa en c++" << endl;
    cout<<"Promedio de 3 números: ";
    double n1,n2,n3, promedio; //declaro las variables de tipo número real (coma flotante)
    //cout<<"Ingresa el primer número: ";
    //cin>>n1;

    cout<<"Ingresa el segundo número: ";
    cin>>n2;

    cout<<"Ingresa el tercer número: ";
    cin>>n3;
    //calcular el promedio
    promedio = (n1+n2+n3)/3;

    cout<<"El promedio es: "<<promedio;

    string nombre="Kleber R. ";
    cout<<"Ingresa tu nombre: ";
    cin>>nombre;
    cout<<endl<<"Tu nombre es: " <<nombre;

    return 0;
}
