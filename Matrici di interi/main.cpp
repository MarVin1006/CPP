/*
 *HelloMatrix.cpp
 *Matrici di numeri
 *Autore: Marco Tallarino
 *Data: 11/12/2020
*/
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int sommaRiga(int matrice[5][5], int riga){
    int somma = 0;
    for (int k=0; k<5; k++){
        somma = somma + matrice[riga][k];
    }
    return somma;
}

void riempiMatrice(int matrice[5][5]) {
    srand(time(NULL));
    for (int r=0; r<5; r++) {
        for (int c=0; c<5; c++) {
            matrice[r][c] = (rand() % 100) + 1;
        }
    }
}

int main()
{
    int m[5][5];
    riempiMatrice(m);
    for (int r=0; r<5; r++) {
        for (int c=0; c<5; c++) {
            cout << m[r][c] << " - ";
        }
        cout << endl;
    }

    cout << endl << "Somma riga = ";
    cout << sommaRiga(m, 0);

    cout << endl << "Diagonale = ";
    for (int x=0; x<5; x++){
        cout << m[x][x] << " - ";
    }
    return 0;
}
