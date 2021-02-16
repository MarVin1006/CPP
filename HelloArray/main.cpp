#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void vettoreCasuale(int v[], int l){
    srand(time(NULL));
    for (int i = 0; i < l; i++){
        v[i] = rand();
    }
}

void riempiVettore(int v[], int l){
    for (int i = 0; i < l; i++){
        v[i] = i;
    }
}

void rovesciaVettore(int v[], int l){
    int ialt = l;
    int valt[l];
    for (int i = l; i < l; i--){
        valt[l] = v[i];
    }
    for (int i = l; i < l; i++){
        v[i] = valt[i];
    }
}

int main()
{
    int vet[10];
    riempiVettore(vet, 10);
    for (int j = 10; j > 0; j--){
        cout << vet[j] << "\t";
    }


    cout << endl;
    return 0;
}
