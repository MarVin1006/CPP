//Programma incompleto
#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    int numero = 1;
    //Creazione file
    ofstream Numeri("numeri.txt");
    ofstream Maggiori("maggiori.txt");
    ofstream Minori("minori.txt");
    int n;
    cout << "Inserire un valore intero: ";
    cin >> n;

    Numeri.close();
    Maggiori.close();
    Minori.close();

    return 0;
}