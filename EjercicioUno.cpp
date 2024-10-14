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

    for(int i = 0; i< 5; i++)
    {
        cout << "Ingrese valor N" << i << endl;
        cin >> arr[i];

    }

    for(int i = 0; i< 5; i++)
    {
        cout << "Direc de p" << i << ": " << p+i << " y apunta a: " << *(p + i) << endl;
    }


    return 0;
}
