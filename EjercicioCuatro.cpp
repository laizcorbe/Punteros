 #include <iostream>

    using namespace std;

    /* Escriba un subprograma que ordene un array, el tamaño del array lo define el usuario y
    luego ingresa sus elementos. Debe hacerse todo a través del uso de punteros: */

    int *ingresarValores(int arr[], int tam)
    {
        int *puntero = arr;

        for (int i = 0; i < tam; i ++)
        {
            cout << "Ingrese el valor para la posicion " << i << ": " << endl;
            cin >> *(puntero + i);
        }
        return puntero;
    }

    void *ordenarValores(int arr[], int tam)
    {
        int *puntero = arr, aux;


        for(int i = 0; i < tam; i++)
        {
            for(int j = 0; j < tam - 1; j++)
            {
                if(*(puntero + j + 1) < *(puntero + j))
                {
                    aux = *(puntero + j + 1);
                    *(puntero + j + 1) = *(puntero + j);
                    *(puntero + j) = aux;
                }

            }
        }

        return 0;
    }

    void *mostrarValores(int arr [], int tam)
    {
        int *puntero = arr;

        cout << "El Array ordenado queda: " << endl;

        for (int i = 0; i < tam; i++)
        {
            cout << "Direccion: " << (puntero + i) << " y valor: " << *(puntero + i) << endl;
        }
        return 0;
    }

    int main()
    {
        int n, *p = NULL;
        cout << "ingrese el valor de n: " << endl;
        cin >> n;

        int *pArray = NULL;

        pArray = new int [n];

        p = ingresarValores(pArray, n);


        ordenarValores(pArray, n);
        mostrarValores(pArray, n);

        delete [] pArray;


        return 0;
    }
