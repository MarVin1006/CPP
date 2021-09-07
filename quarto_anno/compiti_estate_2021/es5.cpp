/*
Il programma stampa i primi N numeri della successione Fibonacci con N inserito dall'utente
*/
#include <iostream>
using namespace std;

int main()
{
    short int n;
    long long int fib0=0, fib1=1, fibris;
    cout<<"Inserire N: ";
    cin >> n;

    //Calcolo successione Fibonacci
    for (int i=0; i<n; i++){
        fibris = fib0 + fib1;
        fib0 = fib1;
        fib1 = fibris;
        cout << fib0 << ", ";
        }
    return 0;
}