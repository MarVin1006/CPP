/*
 *MatriciDiAsterischi.cpp
 *Il programma stampa matrici disposte in modo da formare un quadrato sezionato da punti
 *Autore: Marco Tallarino
 *Data: 11/12/2020
*/
#include <iostream>

using namespace std;

void riempiMatrice(char matrice[10][10]) {
    for (int r=0; r<10; r++) {
        for (int c=0; c<10; c++) {
                if (r==c){
                    matrice[r][c] = '.';
                    }
                else if (r<c){
                    matrice[r][c] = '*';
                }
                else{
                    matrice[r][c] = ' ';
                }
        }
    }
}

void stampaMatrice(char matrice[10][10]) {
    for (int r=0; r<10; r++) {
        for (int c=0; c<10; c++) {
            cout << matrice[r][c] << " ";
        }
        cout << endl;
    }
}

int main()
{
    char m[10][10];
    riempiMatrice(m);
    stampaMatrice(m);
    return 0;
}
