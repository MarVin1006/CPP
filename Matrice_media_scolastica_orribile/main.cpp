/*
 *Media_Scolastica.cpp
 *Media scolastica
 *Autore: Marco Tallarino
 *Data: 11/12/2020
*/
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int sommaRiga(int matrice[24][7], int riga){
    int somma = 0;
    for (int k=0; k<24; k++){
        somma = somma + matrice[riga][k];
    }
    return somma;
}

void riempiMatrice(int matrice[24][7]) {
    srand(time(NULL));
    for (int r=0; r<24; r++) {
        matrice[r][0] = r + 1;
        matrice[r][6] = 0;
        for (int c=1; c<6; c++) {
            matrice[r][c] = (rand() % 8) + 2;
        }
    }
}

void riempiMedia(int matrice[24][7]) {
    int m = 0;
    for (int r=0; r<25; r++) {
        if (m != 0){
            matrice[r-1][6] /= m;
        }
        m = 0;
        if (r < 25){
            for (int c=1; c<6; c++) {
                matrice[r][6] = matrice[r][6] + matrice[r][c];
                m++;
            }
        }
    }

}


int main()
{
    int registro[24][7], mediatotale=0 , ms=0;
    riempiMatrice(registro);
    riempiMedia(registro);
    for (int r=0; r<24; r++) {
        for (int c=0; c<6; c++) {
            if (c == 0) {
                cout << "Studente " << registro[r][c] << ": ";
            }
            else {
            cout << registro[r][c] << " - ";
            }
        }
        cout << endl;
    }

    for (int r=0; r<24; r++) {
        for (int c=1; c<6; c++) {
                mediatotale+=registro[r][c];
                ms++;
        }
    }

    cout << "Media di tutti gli studenti: " << mediatotale/ms << endl;
    int numstudente = 1;
    while (true){
        cout << "Visualizza la media di uno studente (inserire 0 per smettere): ";
        cin >> numstudente;
        if (numstudente == 0){
            break;
        }
        cout << "Media = " << registro[numstudente - 1][6] << endl;

        }


    return 0;
    }
