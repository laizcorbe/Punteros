#include <iostream>

using namespace std;


/* Usando un puntero, escriba un programa que encuentre el máximo de un conjunto de
enteros que ingresa el usuario. El usuario ingresa al principio el tamaño de la muestra. */


int *buscarElMayor(int *puntero, int tam)
{
    int *aux=NULL;
    aux = puntero;

    for(int i = 0; i< tam; i++)
    {
        if(puntero[i] > *aux || i == 0)
        {
            aux = &puntero[i];
        }

    }

    return aux;
}

int main()
{
    int n;

    cout << "Ingrese la cantidad de numeros que va mandar: " << endl;
    cin >> n;

    int *pArray = NULL;

    pArray = new int [n];


    for(int i = 0; i < n; i++)
    {
        cout << "Ingrese el N" << i << ": ";
        cin >> pArray[i];
    }

    int *aux = NULL;

    aux = buscarElMayor(pArray, n);

    cout << "El MAYOR de los valores ingresados es: " << *aux << endl;


    delete [] pArray;
    return 0;
}
