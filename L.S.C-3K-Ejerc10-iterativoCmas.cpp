// L.S.C-3K-Ejerc10-iterativoCmas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//ITERATIVO PAOLA JAZMIN ESQUINCA LOPEZ

#include<iostream>
using namespace std;

int sumaiterativa(int n) {
    int suma = 0;
    while (n > 9) {
        suma += n % 10;
        n /= 10;
    }
    return (suma + n);
}

int main() {
    int n;
    cout << "Ingresa un número entero: ";
    cin >> n;
    int resultado = sumaiterativa(n);
    cout << "La suma de los dígitos es:" << resultado << endl;
    return 0;
}