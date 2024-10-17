#include <iostream>

using namespace std;

int main()
{
    int *x, *y, i = 10;

    x = &i;
    y = x;

    *x = *y + 1; //11

    cout << "Primer valor x: " << *x <<endl;    //SAle que el valor de x = 11

    *y = *x + 1;    //12

    cout << "Valor de i: " << i << endl;                //Sale que el valor de i = 12
    y = new int;
    *y = *x/2;

    cout << "Segundo valor X: " << *x << " y Direc x: " << x <<endl;   //Sale que el valor de X = 12
    cout << "Valor y: " << *y << " y Direc y: " << y <<endl;           //Sale que el valor de Y = 6


    delete y;

    return 0;
}
