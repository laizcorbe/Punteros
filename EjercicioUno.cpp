#include <iostream>

using namespace std;

/* Escriba un programa que, utilizando aritmética de punteros, tome 5 elementos enteros en
un array y luego los muestre en pantalla:

*/


int main()
{
    int arr[5];
    int *p = NULL;

    p = arr;

    cout << "ingrese 5 valores" << endl;

    cout << "Ingrese el valor para la posicion 1: ";
    cin >> *p;
    cout << "Ingrese el valor para la posicion 2: ";
    cin >> *(p + 1);
    cout << "Ingrese el valor para la posicion 3: ";
    cin >> *(p + 2);
    cout << "Ingrese el valor para la posicion 4: ";
    cin >> *(p + 3);
    cout << "Ingrese el valor para la posicion 5: ";
    cin >> *(p + 4);

    for(int i = 0; i< 5; i++)
    {
        cout << "Direc de p" << i << ": " << p+i << " y apunta a: " << *(p + i) << endl;
    }


    return 0;
}
