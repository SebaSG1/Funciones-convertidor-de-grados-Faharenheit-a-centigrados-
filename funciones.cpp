#include <iostream>

using namespace std;

// Prototipo de funcion
double convertirAcentigrados(double temperaturaEnFaharenheit);

int main()
{
double temp;
double temperatura;
cout << "Convertidor de grados Faharenheit a centigrados" <<endl;
cout << "Ingrese la temperatura en grados Faharenheit: " <<endl;
cin >> temp;

temperatura = convertirAcentigrados(temp);
cout << "Los grados Faharenheit ingresados equivalen a " << temperatura << " grados centigrados" <<endl;

    return 0;
}

// Definicion de la funcion
double convertirAcentigrados(double temperaturaEnFaharenheit)
{ 
    double resultado = (temperaturaEnFaharenheit -32) * 5/9;
    return resultado;
}
