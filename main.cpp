#include <iostream>
using namespace std;

//Ejercicio 1: Leer 3 n�meros  y encontrar el promedio
int main() {
    // cout << "Hola mundo. Primer programa en c++" << endl;
    cout<<"Promedio de 3 n�meros: ";
    double n1,n2,n3, promedio; //declaro las variables de tipo n�mero real (coma flotante)
    //cout<<"Ingresa el primer n�mero: ";
    //cin>>n1;

    cout<<"Ingresa el segundo n�mero: ";
    cin>>n2;

    cout<<"Ingresa el tercer n�mero: ";
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
