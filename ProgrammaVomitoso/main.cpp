#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

int generalista(int rangemax){
    return (rand() % rangemax) + 1;
}

int minDelVettore(int vet[], int len){
    int nmin = vet[len];

    for (int i=0; i<len; i++){
        if (nmin > vet[i]) {
            nmin = vet[i];
        }
    }
    return nmin;
}



void stampaUnMessaggio(string messaggio,int volte){
    for(int i=0; i<volte; i++){
        cout << messaggio << endl;
    }
}

int main()
{
    /*string scrittabrutta="Programma vomitoso";
    int quantovoglioio=69;
    stampaUnMessaggio(scrittabrutta, quantovoglioio);
    */
    srand(time(NULL));
    int lenvettore = 100;
    int vettore[lenvettore];
    for (int i; i<lenvettore; i++){
        vettore[i] = generalista(lenvettore);
    }

    for (int i = 0; i < lenvettore; i++){
        cout << vettore[i] << "\t";
    }

    ///int nminvet(minDelVettore())
    return 0;
}
