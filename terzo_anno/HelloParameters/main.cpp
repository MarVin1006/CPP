/*
 HelloParameters.cpp
 Autore: MarVin
 Data: 23/12/2020
*/

#include <iostream>

using namespace std;

int somma(int a, int b){
    int r;
    r = a+b;
    return r;
}

int decrementa(int &x){
    x = x-1;
    return x;
}

int main()
{
    int n = 100;
    cout << "Funzione somma " << somma(5, 6) << endl;
    cout << "Funzione decrementa " << endl;
    decrementa(n);
    decrementa(n);
    decrementa(n);
    cout << "Valore variabile n " << n << endl;

    cout << n << endl;
    cout << &n << endl;
    return 0;
}
